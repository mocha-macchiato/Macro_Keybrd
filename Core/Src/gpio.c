/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file    gpio.c
 * @brief   This file provides code for the configuration
 *          of all used GPIO pins.
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
 * Analog
 * Input
 * Output
 * EVENT_OUT
 * EXTI
 */
void MX_GPIO_Init(void)
{

  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : PtPin */
  GPIO_InitStruct.Pin = LED_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : PAPin PAPin PAPin PAPin
                           PAPin PAPin PAPin PAPin */
  GPIO_InitStruct.Pin = K0_Pin | K1_Pin | K2_Pin | K3_Pin | K4_Pin | K5_Pin | K6_Pin | K7_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
}

/* USER CODE BEGIN 2 */
uint8_t Key_Scan(void)
{
  uint8_t key_value = 0;
  if (VK0 == GPIO_PIN_RESET || VK1 == GPIO_PIN_RESET || VK2 == GPIO_PIN_RESET || VK3 == GPIO_PIN_RESET ||
      VK4 == GPIO_PIN_RESET || VK5 == GPIO_PIN_RESET || VK6 == GPIO_PIN_RESET || VK7 == GPIO_PIN_RESET)
  {
    HAL_Delay(10);
    if (VK0 == GPIO_PIN_RESET)
      key_value = 0x01;
    else if (VK1 == GPIO_PIN_RESET)
      key_value = 0x02;
    else if (VK2 == GPIO_PIN_RESET)
      key_value = 0x03;
    else if (VK3 == GPIO_PIN_RESET)
      key_value = 0x04;
    else if (VK4 == GPIO_PIN_RESET)
      key_value = 0x05;
    else if (VK5 == GPIO_PIN_RESET)
      key_value = 0x06;
    else if (VK6 == GPIO_PIN_RESET)
      key_value = 0x07;
    else if (VK7 == GPIO_PIN_RESET)
      key_value = 0x08;
  }
  while (VK0 == GPIO_PIN_RESET || VK1 == GPIO_PIN_RESET || VK2 == GPIO_PIN_RESET || VK3 == GPIO_PIN_RESET ||
         VK4 == GPIO_PIN_RESET || VK5 == GPIO_PIN_RESET || VK6 == GPIO_PIN_RESET || VK7 == GPIO_PIN_RESET)
  {
    /* code */
  }
  return key_value;
}
/* USER CODE END 2 */
