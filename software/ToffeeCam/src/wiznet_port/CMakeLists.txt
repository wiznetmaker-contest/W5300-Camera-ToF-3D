add_library(wiznet_port_lib STATIC
        wiznet_port.h
        wizchip_conf.c wizchip_conf.h
        w5x00_bus.c w5x00_bus.h
        w5x00_network.c w5x00_network.h
        w5x00_timer.c w5x00_timer.h

)

target_include_directories(wiznet_port_lib PUBLIC ./)
