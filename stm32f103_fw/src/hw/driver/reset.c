/*
 * reset.c
 *
 *  Created on: Jun 11, 2025
 *      Author: jjt67
 */

#include "reset.h"
#include "rtc.h"

static uint32_t reset_count = 0;

bool resetInit(void)
{
  bool ret = true;

  if (RCC->CSR & (1<<26))
  {
    rtcBackupRegWrite(1, rtcBackupRegRead(0) + 1);
    delay(500);
    reset_count = rtcBackupRegRead(0);
  }

  rtcBackupRegWrite(1, 0);

  return ret;
}

uint32_t resetGetCount(void)
{

  return 0;
}
