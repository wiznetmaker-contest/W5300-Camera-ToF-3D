add_library(toffeecam_lib STATIC
        toffeecam.h
        arch/toffeecam_arch.h

)

target_include_directories(toffeecam_lib PUBLIC ./)
