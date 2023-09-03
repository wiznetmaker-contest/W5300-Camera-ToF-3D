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

#include <wiznet.h>

/**
 * ----------------------------------------------------------------------------------------------------
 * Macros
 * ----------------------------------------------------------------------------------------------------
 */
#define SOCKET_LOOPBACK 0
#define PORT_LOOPBACK 5000

/**
 * ----------------------------------------------------------------------------------------------------
 * Variables
 * ----------------------------------------------------------------------------------------------------
 */
static uint8_t g_loopback_buf[ETHERNET_BUF_MAX_SIZE] = {
    0,
};

/**
 * ----------------------------------------------------------------------------------------------------
 * Functions
 * ----------------------------------------------------------------------------------------------------
 */
void loopback_demo(wiz_NetInfo *net_info)
{
  int retval = 0;

  wizchip_network_initialize(net_info);
  wizchip_network_information(net_info);

  uint8_t destip[4]={10,1,0,100};

  /* Infinite loop */
  while (1)
  {
    /* Run TCP server loopback */
    if ((retval = loopback_tcpc(SOCKET_LOOPBACK, g_loopback_buf, destip, PORT_LOOPBACK)) < 0)
    {
      printf(" Loopback error : %d\n", retval);

      while (1)
        ;
    }
  }
}
