/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"

#define NR_WP 32



static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
		wp_pool[i].old_value = 0;
		strcpy(wp_pool[i].watch_name, "");
	}

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
static int total_NO=0;
WP* new_wp(char *watch_name)
{
	//TODO:NO更新
	if(free_ == NULL)
	{
		printf("No empty node to store watchpoint\n");
		assert(0);
	}
	else
	{
		WP* new_node = free_;
		new_node -> next = head;
		head = new_node;
		head -> NO = total_NO;
		total_NO ++;
		free_ = free_ -> next;
		strcpy(head -> watch_name, watch_name);
		head -> old_value = 0;
		return head;
	}
}
void free_wp(WP *wp)
{
	WP* prev_WP = NULL;
	bool find_flag = false;
	WP *current_WP = head;
	while(current_WP != NULL)
	{
		if(current_WP == wp)
		{
			if(current_WP != head) prev_WP -> next = current_WP -> next;
			else head = head -> next;
			current_WP -> next = free_;
			free_ = current_WP;
			find_flag = true;
			break;
	 	}
		prev_WP = current_WP;
		current_WP = current_WP -> next;
	 }

	if(find_flag == false)
	{
		printf("Not find NO:%d\n", wp -> NO);
		assert(0);
	}
}

void free_wp_by_no(uint32_t no)
{
	WP* prev_WP = NULL;
	bool find_flag = false;
	WP *current_WP = head;
	while(current_WP != NULL)
	{
		if(current_WP -> NO == no)
		{
			if(current_WP != head) prev_WP -> next = current_WP -> next;
			else head = head -> next;
			current_WP -> next = free_;
			free_ = current_WP;
			find_flag = true;
			break;
	 	}
		prev_WP = current_WP;
		current_WP = current_WP -> next;
	 }

	if(find_flag == false)
	{
		printf("Not find NO:%d\n", no);
	}
}
