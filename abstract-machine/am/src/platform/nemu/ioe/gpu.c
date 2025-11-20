#include <am.h>
#include <nemu.h>
#include <string.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)
static uint32_t screen_width;


void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	uint32_t screen_height = (uint32_t)inw(VGACTL_ADDR);
	screen_width = (uint32_t)inw(VGACTL_ADDR + 2);
	int vmem_size = 4 * screen_width * screen_height;
	*cfg = (AM_GPU_CONFIG_T) {
		.present = true, .has_accel = false,
		.width = screen_width, .height = screen_height,
		.vmemsz = vmem_size
	};
}

void __am_gpu_init() {
	/*int i;
	AM_GPU_CONFIG_T cfg;
	__am_gpu_config(&cfg);
	int w = cfg.width;  // TODO: get the correct width
	int h = cfg.height;  // TODO: get the correct height
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	for (i = 0; i < w * h; i ++) fb[i] = i;
	outl(SYNC_ADDR, 1);*/
}


void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

	const uint32_t *user_pixels = (const uint32_t *)ctl->pixels;
	for (int y = 0; y < ctl->h; y++) {
		const uint32_t *src = user_pixels + ctl->w * y;
		uint32_t *dst = (uint32_t *)FB_ADDR + ctl->x + (ctl->y + y) * screen_width;
		memcpy(dst, src, ctl->w * 4);
	}


	if (ctl->sync) {
		outl(SYNC_ADDR, 1);
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
