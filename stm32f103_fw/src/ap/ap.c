/*
 * ap.c
 *
 *  Created on: Jun 10, 2025
 *      Author: jjt67
 */

#include "ap.h"
#include "led.h"


void apInit(void)
{
  uartOpen(_DEF_UART1, 57600);
}

void apMain(void)
{
  uint32_t pre_time;
  uint32_t pre_baud;
  uint32_t led_blink_time;

  if (resetGetCount() >= 2)
  {
    led_blink_time = 100;
  }

  pre_baud = uartGetBaud(_DEF_UART1);
  pre_time = millis();

  while(1){
    if (millis() - pre_time >= led_blink_time)
    {
      pre_time = millis();
      ledToggle(_DEF_LED1);

      uartPrintf(_DEF_UART1, "ResetCount: %d\n", resetGetCount());
    }

    if (uartAvailable(_DEF_UART1) > 0)
    {
      uint8_t rx_data;

      rx_data = uartRead(_DEF_UART1);

      uartPrintf(_DEF_UART1, "RXData: %c 0x%X\n", rx_data, rx_data);
    }

    if (uartGetBaud(_DEF_UART1))
    {
      pre_baud = uartGetBaud(_DEF_UART1);
      uartPrintf(_DEF_UART1, "ChangedBaud : %d\n", uartGetBaud(_DEF_UART1));
    }
  }

}
