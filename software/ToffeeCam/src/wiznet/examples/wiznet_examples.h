/**
 * Copyright (c) 2023 WIZnet Co.,Ltd
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef WIZNET_EXAMPLES_H
#define WIZNET_EXAMPLES_H

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * ----------------------------------------------------------------------------------------------------
 * Includes
 * ----------------------------------------------------------------------------------------------------
 */

/**
 * ----------------------------------------------------------------------------------------------------
 * Macros
 * ----------------------------------------------------------------------------------------------------
 */
// ----------------------------------------------------------------------------------------------------
// The application you wish to use should be uncommented
// ----------------------------------------------------------------------------------------------------
//#define WIZNET_EXAMPLE_APP_DHCP
//#define WIZNET_EXAMPLE_APP_DNS
//#define WIZNET_EXAMPLE_APP_HTTP_SERVER
//#define WIZNET_EXAMPLE_APP_MQTT_PUBLISH
//#define WIZNET_EXAMPLE_APP_MQTT_SUBSCRIBE
//#define WIZNET_EXAMPLE_APP_MQTT_PUBLISH_SUBSCRIBE
//#define WIZNET_EXAMPLE_APP_SNTP
//#define WIZNET_EXAMPLE_APP_TCP_CLIENT_OVER_SSL
#define WIZNET_EXAMPLE_APP_LOOPBACK
// ----------------------------------------------------------------------------------------------------

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
void dhcp_demo(wiz_NetInfo *net_info);
void dns_demo(wiz_NetInfo *net_info);
void http_server_demo(wiz_NetInfo *net_info);
void mqtt_publish_demo(wiz_NetInfo *net_info);
void mqtt_subscribe_demo(wiz_NetInfo *net_info);
void mqtt_publish_subscribe_demo(wiz_NetInfo *net_info);
void sntp_demo(wiz_NetInfo *net_info);
void tcp_client_over_ssl_demo(wiz_NetInfo *net_info);
void loopback_demo(wiz_NetInfo *net_info);

#ifdef __cplusplus
}
#endif

#endif /* WIZNET_EXAMPLES_H */
