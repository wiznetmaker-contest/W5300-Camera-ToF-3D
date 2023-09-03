//
// Created by jarojuda on 01.09.23.
//

#include "wiznet.h"

extern "C" void wiznet_task(void *pvParameter) {

    wiz_NetInfo net_info =
            {
                    .mac = {0x00, 0x08, 0xDC, 0x12, 0x34, 0x56}, // MAC address
                    .ip = {10, 1, 0,122},                     // IP address
                    .sn = {255, 255, 255, 0},                    // Subnet Mask
                    .gw = {10, 1, 0, 1},                     // Gateway
                    .dns = {8, 8, 8, 8},                         // DNS server
#ifdef WIZNET_DEMO_APP_DHCP
                    .dhcp = NETINFO_DHCP                         // Dynamic IP
#else
                    .dhcp = NETINFO_STATIC                       // Static IP
#endif
            };

    // ----------------------------------------------------------------------------------------------------
    // Call main function - example funcion
    // Select one application
    // ----------------------------------------------------------------------------------------------------
#ifdef WIZNET_EXAMPLE_APP_DHCP
    dhcp_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_DHCP */
#ifdef WIZNET_EXAMPLE_APP_DNS
    dns_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_DNS */
#ifdef WIZNET_EXAMPLE_APP_HTTP_SERVER
    http_server_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_HTTP_SERVER */
#ifdef WIZNET_EXAMPLE_APP_MQTT_PUBLISH
    mqtt_publish_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_MQTT_PUBLISH */
#ifdef WIZNET_EXAMPLE_APP_MQTT_SUBSCRIBE
    mqtt_subscribe_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_MQTT_SUBSCRIBE */
#ifdef WIZNET_EXAMPLE_APP_MQTT_PUBLISH_SUBSCRIBE
    mqtt_publish_subscribe_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_MQTT_PUBLISH_SUBSCRIBE */
#ifdef WIZNET_EXAMPLE_APP_SNTP
    sntp_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_SNTP */
#ifdef WIZNET_EXAMPLE_APP_TCP_CLIENT_OVER_SSL
    tcp_client_over_ssl_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_TCP_CLIENT_OVER_SSL */
#ifdef WIZNET_EXAMPLE_APP_LOOPBACK
    loopback_demo(&net_info);
#endif /* WIZNET_EXAMPLE_APP_LOOPBACK */
    // ----------------------------------------------------------------------------------------------------

}

namespace wiznet {


}
