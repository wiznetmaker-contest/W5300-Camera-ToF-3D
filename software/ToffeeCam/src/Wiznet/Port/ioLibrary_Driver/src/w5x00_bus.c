/**
 * Copyright (c) 2023 WIZnet Co.,Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * ----------------------------------------------------------------------------------------------------
 * Includes
 * ----------------------------------------------------------------------------------------------------
 */
#include <stdio.h>
#include "main.h"
#include "wizchip_conf.h"
#include "w5x00_bus.h"

/**
 * ----------------------------------------------------------------------------------------------------
 * Macros
 * ----------------------------------------------------------------------------------------------------
 */

/**
 * ----------------------------------------------------------------------------------------------------
 * Variables
 * ----------------------------------------------------------------------------------------------------
 */

/**
 * ----------------------------------------------------------------------------------------------------
 * Functions
 * ----------------------------------------------------------------------------------------------------
 */

void wizchip_initialize(void)
{
  /* Deselect the FLASH : chip select high */
  wizchip_cs_deselect();

  /* CS function register */
  reg_wizchip_cs_cbfunc(wizchip_cs_select, wizchip_cs_deselect);

  /* BUS function register */
  reg_wizchip_bus_cbfunc(wizchip_bus_readdata, wizchip_bus_writedata);

  /* W5x00 initialize */
#if (_WIZCHIP_ == W5100S)
  uint8_t memsize[2][4] = {{2, 2, 2, 2}, {2, 2, 2, 2}};
#elif (_WIZCHIP_ == W5300)
  uint8_t memsize[2][8] = {{8, 8, 8, 8, 8, 8, 8, 8}, {8, 8, 8, 8, 8, 8, 8, 8}};
#elif (_WIZCHIP_ == W5500)
  uint8_t memsize[2][8] = {{2, 2, 2, 2, 2, 2, 2, 2}, {2, 2, 2, 2, 2, 2, 2, 2}};
#endif

  if (ctlwizchip(CW_INIT_WIZCHIP, (void *)memsize) == -1)
  {
    printf(" W5x00 initialized fail\n");

    return;
  }

#if (_WIZCHIP_ != W5300)
  uint8_t temp;

  /* Check PHY link status */
  do
  {
    if (ctlwizchip(CW_GET_PHYLINK, (void *)&temp) == -1)
    {
      printf(" Unknown PHY link status\n");

      return;
    }
  } while (temp == PHY_LINK_OFF);
#endif
}


