/**
  ******************************************************************************
  * @file    app_tof_pin_conf.h
  * @author  IMG SW Application Team
  * @brief   This file contains definitions for TOF pins
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_TOF_PIN_CONF_H__
#define __APP_TOF_PIN_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u5xx_hal.h"

/* Exported symbols ----------------------------------------------------------*/

#define VL53L7A1_PWR_EN_L_PIN   (GPIO_PIN_7)
#define VL53L7A1_PWR_EN_L_PORT  (GPIOF)
#define VL53L7A1_PWR_EN_R_PIN   (GPIO_PIN_12)
#define VL53L7A1_PWR_EN_R_PORT  (GPIOC)
#define VL53L7A1_PWR_EN_C_PIN   (GPIO_PIN_6)
#define VL53L7A1_PWR_EN_C_PORT  (GPIOF)

#define VL53L7A1_LPn_L_PIN   (GPIO_PIN_4)
#define VL53L7A1_LPn_L_PORT  (GPIOB)
#define VL53L7A1_LPn_R_PIN   (GPIO_PIN_8)
#define VL53L7A1_LPn_R_PORT  (GPIOB)
#define VL53L7A1_LPn_C_PIN   (GPIO_PIN_3)
#define VL53L7A1_LPn_C_PORT  (GPIOH)

#define VL53L7A1_I2C_RST_L_PIN   (GPIO_PIN_12)
#define VL53L7A1_I2C_RST_L_PORT  (GPIOG)
#define VL53L7A1_I2C_RST_R_PIN   (GPIO_PIN_8)
#define VL53L7A1_I2C_RST_R_PORT  (GPIOF)
#define VL53L7A1_I2C_RST_C_PIN   (GPIO_PIN_9)
#define VL53L7A1_I2C_RST_C_PORT  (GPIOF)

#ifdef __cplusplus
}
#endif

#endif /* __APP_TOF_PIN_CONF_H__ */
