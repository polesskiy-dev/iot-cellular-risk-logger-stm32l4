/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

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
#define LED__Pin GPIO_PIN_13
#define LED__GPIO_Port GPIOC
#define GSM_EN_Pin GPIO_PIN_0
#define GSM_EN_GPIO_Port GPIOA
#define GNSS_EN_Pin GPIO_PIN_1
#define GNSS_EN_GPIO_Port GPIOA
#define IMU_INT1_Pin GPIO_PIN_4
#define IMU_INT1_GPIO_Port GPIOA
#define IMU_INT2_Pin GPIO_PIN_5
#define IMU_INT2_GPIO_Port GPIOA
#define SIM_DETECT_Pin GPIO_PIN_2
#define SIM_DETECT_GPIO_Port GPIOB
#define GSM_RI_Pin GPIO_PIN_14
#define GSM_RI_GPIO_Port GPIOB
#define GSM_DTR_Pin GPIO_PIN_15
#define GSM_DTR_GPIO_Port GPIOB
#define GSM_DCD_Pin GPIO_PIN_8
#define GSM_DCD_GPIO_Port GPIOA
#define CHARGE_STAT_Pin GPIO_PIN_4
#define CHARGE_STAT_GPIO_Port GPIOB
#define _LIGHT_INT_Pin GPIO_PIN_6
#define _LIGHT_INT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
