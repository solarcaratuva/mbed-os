target_link_libraries(mbed-headers
    INTERFACE
        mbed-headers-base
        mbed-headers-platform
        mbed-headers-example
)

add_library(mbed-stubs-example-interface)

target_sources(mbed-stubs-example-interface
    PRIVATE
        example_interface_api_stub.c
)    

target_link_libraries(mbed-stubs-example-interface
    PRIVATE
        mbed-headers
        mbed-stubs-headers
)