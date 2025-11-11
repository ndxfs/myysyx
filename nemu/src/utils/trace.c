#include <elf.h>
#include <common.h>
#include <cpu/decode.h>
//#define TRACE_DEBUG

#define FUNC_DEETH 64
static int func_index = 0;



//解析elf部分
typedef struct {
    uintptr_t addr;
    size_t size;
    char name[64];
} FunctionSymbol;

FunctionSymbol *func_symbols = NULL;
size_t func_count = 0;
void show_all_func(void);
void load_elf_symbols(const char * file)
{
	if(file == NULL)
	{
		Assert(0, "Need ELF path");
	}
	
	FILE *fp = fopen(file, "rb");
	if(!fp)
	 {
		Assert(0, "Failed to open ELF file: %s", file);
	}


	Elf32_Ehdr ehdr;
	size_t cnt = fread(&ehdr, sizeof(ehdr), 1, fp);
	if (cnt != sizeof(ehdr)) printf("Failed to read section headers: expected %ld, got %zu\n", sizeof(ehdr), cnt);

	if(memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fclose(fp);
		Assert(0, "ELF magic number check failed");
		
	}

	fseek(fp, ehdr.e_shoff, SEEK_SET);

	Elf32_Shdr *shdrs = malloc(ehdr.e_shnum * sizeof(Elf32_Shdr));
	cnt = fread(shdrs, sizeof(Elf32_Shdr), ehdr.e_shnum, fp);
	if (cnt != ehdr.e_shnum) printf("Failed to read section headers: expected %d, got %zu\n", ehdr.e_shnum, cnt);

	Elf32_Shdr *shstrtab_shdr = &shdrs[ehdr.e_shstrndx];
	char *shstrtab = malloc(shstrtab_shdr->sh_size);
	fseek(fp, shstrtab_shdr->sh_offset, SEEK_SET);
	cnt = fread(shstrtab, 1, shstrtab_shdr->sh_size, fp);
	if (cnt != shstrtab_shdr->sh_size) printf("Failed to read section headers: expected %d, got %zu\n", shstrtab_shdr->sh_size, cnt);

	Elf32_Shdr *symtab_shdr = NULL;
	Elf32_Shdr *strtab_shdr = NULL;

	for(int i = 0; i< ehdr.e_shnum; i++)
	{
		char *name = shstrtab + shdrs[i].sh_name;

		if(shdrs[i].sh_type == SHT_SYMTAB && strcmp(name, ".symtab") == 0)	symtab_shdr = &shdrs[i];
		else if(shdrs[i].sh_type == SHT_STRTAB && strcmp(name, ".strtab") == 0)	strtab_shdr = &shdrs[i];
	}

	if(symtab_shdr == NULL || strtab_shdr == NULL)
	{
		free(shdrs);
		free(shstrtab);
		fclose(fp);
		Assert(0,"Failed to find the string table or the symbol table");
	}

	char *strtab = malloc(strtab_shdr->sh_size);
	fseek(fp, strtab_shdr->sh_offset, SEEK_SET);
	cnt = fread(strtab, 1, strtab_shdr->sh_size, fp);
	if (cnt != strtab_shdr->sh_size) printf("Failed to read section headers: expected %d, got %zu\n", strtab_shdr->sh_size, cnt);

	int num_syms = symtab_shdr->sh_size/sizeof(Elf32_Sym);
	Elf32_Sym *syms = malloc(symtab_shdr->sh_size);
	fseek(fp,symtab_shdr->sh_offset, SEEK_SET);
	cnt = fread(syms, sizeof(Elf32_Sym), num_syms, fp);
	if (cnt != sizeof(Elf32_Sym)) printf("Failed to read section headers: expected %ld, got %zu\n", sizeof(Elf32_Sym), cnt);
	

	func_count = 0;
	#ifdef TRACE_DEBUG
	printf("strtab offset is 0x%x, the first string is %s\n", strtab_shdr->sh_offset, strtab);
	#endif
	for(int i = 0; i < num_syms; i++)
	{
		if(ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_name != 0) 
		{
			#ifdef TRACE_DEBUG
			printf("find function %d\n", i);
			printf("funtion name is %s\n", strtab + syms[i].st_name);
			printf("offset is 0x%x\n", syms[i].st_name);
			#endif
			func_count++;
		}

	}

	func_symbols = malloc(func_count *sizeof(FunctionSymbol));

	int index = 0;
	for(int i = 0; i < num_syms; i++)
	{
		if(ELF32_ST_TYPE(syms[i].st_info) == STT_FUNC && syms[i].st_name != 0)
		{
			func_symbols[index].addr = syms[i].st_value;
			func_symbols[index].size = syms[i].st_size;
			strncpy(func_symbols[index].name, strtab + syms[i].st_name, sizeof(func_symbols[index].name) - 1);
			func_symbols[index].name[sizeof(func_symbols[index].name) - 1] = '\0';
			index++;
		}
	}
	
	free(syms);
	free(strtab);
	free(shstrtab);
	free(shdrs);
	fclose(fp);
	show_all_func();
}


const char *addr_to_func_name_in(vaddr_t addr)
{
	for(int i = 0; i< func_count; i++)
	{
		if(addr >= func_symbols[i].addr && addr < func_symbols[i].addr + func_symbols[i].size) return func_symbols[i].name;
	}
	return "???";
}

const char *addr_to_func_name_start(vaddr_t addr)
{
	for(int i = 0; i < func_count; i++)
	{
		if(addr == func_symbols[i].addr) return func_symbols[i].name;
	}
	return "???";
}

void show_all_func(void)
{
	for(int i = 0; i < func_count; i++)
	{
		printf("function[%d]\tname:%s at addr:%lx\n", i, func_symbols[i].name, func_symbols[i].addr);
	}
}


//函数调用返回部分,写riscv32,x86等指令集实现不一样，后续考虑，其实想在inst.c下的，一方面服用解析的部分，另一方面，不同架构单独实现一下也挺不错的，但是不放在inst.c是因为trace部分不应该影响inst部分
void check_function_call_or_return(Decode *s)
{


	if ((s->isa.inst & 0xFFFFF07F) == 0x00008067) //ret=jalr x0, 0(x1)
	{
		const char *func_name = addr_to_func_name_in(s->pc);
		printf(FMT_WORD":%*c ret [%s]\n", s->pc, func_index, ' ', func_name);
		if(func_index > 0) func_index--;
		//return 1;
    }
	else  if ((s->isa.inst & 0x707F) == 0x67 || (s->isa.inst & 0x7F) == 0x6F) //jal/jalr
	{
		if(strcmp(addr_to_func_name_start(s->dnpc),"???") != 0)
		{
			const char *func_name = addr_to_func_name_start(s->dnpc);
			if(func_index < FUNC_DEETH)func_index++;
			printf(FMT_WORD":%*c call [%s@" FMT_WORD "]\n", s->pc, func_index, ' ', func_name, s->dnpc);
			//return 2;
		}
		//else 
		//{
		//	printf("Not function call:pc"FMT_WORD"  next_pc:"FMT_WORD"\n", s->pc, s->dnpc);
		//}
	}
	//return 0;//no call no return;
	//暂时不写返回值了，等到用的话再加
}

