/*
 * main.c
 *
 *  Created on: Jun 10, 2025
 *      Author: jjt67
 */

#include "main.h"

int main(void)
{
  hwInit();
  apInit();

  apMain();

  return 0;
}
