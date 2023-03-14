/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

  /* Private includes ----------------------------------------------------------*/
  /* USER CODE BEGIN Includes */

  /* USER CODE END Includes */

  /* Exported types ------------------------------------------------------------*/
  /* USER CODE BEGIN ET */

  /* USER CODE END ET */

  /* Exported constants --------------------------------------------------------*/
  /* USER CODE BEGIN EC */

  /* USER CODE END EC */

  /* Exported macro ------------------------------------------------------------*/
  /* USER CODE BEGIN EM */

  /* USER CODE END EM */

  /* Exported functions prototypes ---------------------------------------------*/
  void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define K0_Pin GPIO_PIN_0
#define K0_GPIO_Port GPIOA
#define K1_Pin GPIO_PIN_1
#define K1_GPIO_Port GPIOA
#define K2_Pin GPIO_PIN_2
#define K2_GPIO_Port GPIOA
#define K3_Pin GPIO_PIN_3
#define K3_GPIO_Port GPIOA
#define K4_Pin GPIO_PIN_4
#define K4_GPIO_Port GPIOA
#define K5_Pin GPIO_PIN_5
#define K5_GPIO_Port GPIOA
#define K6_Pin GPIO_PIN_6
#define K6_GPIO_Port GPIOA
#define K7_Pin GPIO_PIN_7
#define K7_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */
#define VK0 HAL_GPIO_ReadPin(K0_GPIO_Port, K0_Pin)
#define VK1 HAL_GPIO_ReadPin(K1_GPIO_Port, K1_Pin)
#define VK2 HAL_GPIO_ReadPin(K2_GPIO_Port, K2_Pin)
#define VK3 HAL_GPIO_ReadPin(K3_GPIO_Port, K3_Pin)
#define VK4 HAL_GPIO_ReadPin(K4_GPIO_Port, K4_Pin)
#define VK5 HAL_GPIO_ReadPin(K5_GPIO_Port, K5_Pin)
#define VK6 HAL_GPIO_ReadPin(K6_GPIO_Port, K6_Pin)
#define VK7 HAL_GPIO_ReadPin(K7_GPIO_Port, K7_Pin)
  /* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
