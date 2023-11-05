add_library(mbed-headers-example INTERFACE)

target_include_directories(mbed-headers-example
 INTERFACE
     ${mbed-os_SOURCE_DIR}/example
     ${mbed-os_SOURCE_DIR}/example/include
     ${mbed-os_SOURCE_DIR}/example/include/example
 )