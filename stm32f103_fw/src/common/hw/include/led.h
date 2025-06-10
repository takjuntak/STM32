/*
 * led.h
 *
 *  Created on: Jun 10, 2025
 *      Author: jjt67
 */

#ifndef SRC_COMMON_HW_INCLUDE_LED_H_
#define SRC_COMMON_HW_INCLUDE_LED_H_

#include "hw_def.h"

#ifdef _USE_HW_LED

#define LED_MAX_CH    HW_LED_MAX_CH

bool ledInit(void);
void ledOn(uint8_t ch);
void ledOff(uint8_t ch);
void ledToggle(uint8_t ch);

#endif

#endif /* SRC_COMMON_HW_INCLUDE_LED_H_ */
