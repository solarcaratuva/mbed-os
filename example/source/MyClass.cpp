#include "MyClass.h"
#include "example_interface_api.h"

namespace example {

int MyClass::myFunction()
{
    OtherClass o = OtherClass();
    example_interface_status_t status = example_interface_api_init();        
    example_interface_api_start();        
    return o.otherFunction();
}

}