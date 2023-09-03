file(GLOB_RECURSE SRCS examples/*.c examples/*.h io_library/*.c io_library/*.h)
list(APPEND SRCS wiznet.cpp wiznet.h)

add_library(wiznet_lib STATIC
        ${SRCS})

target_include_directories(wiznet_lib PUBLIC ./ PRIVATE ../)
target_compile_definitions(wiznet_lib PRIVATE _WIZCHIP_=W5300)
