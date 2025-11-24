#include <am.h>

#include ISA_H

# define DEVICE_BASE 0xa0000000 
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	uint64_t us_h = inl(RTC_ADDR + 4);
	uint64_t us_l = inl(RTC_ADDR);
	uptime->us = (us_h << 32) | us_l;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
