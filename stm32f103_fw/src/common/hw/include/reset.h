/*
 * reset.h
 *
 *  Created on: Jun 11, 2025
 *      Author: jjt67
 */

#ifndef SRC_COMMON_HW_INCLUDE_RESET_H_
#define SRC_COMMON_HW_INCLUDE_RESET_H_

#include "hw_def.h"

#ifdef _USE_HW_RESET

bool resetInit(void);

uint32_t resetGetCount(void);

#endif

#endif /* SRC_COMMON_HW_INCLUDE_RESET_H_ */
