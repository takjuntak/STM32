/*
 * hw.c
 *
 *  Created on: Jun 10, 2025
 *      Author: jjt67
 */


#include "hw.h"
#include "led.h"

void hwInit(void)
{
  bspInit();

  ledInit();
  uartInit();
}
