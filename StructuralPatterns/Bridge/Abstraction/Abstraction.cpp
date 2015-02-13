#include "Abstraction.h"

void Abstraction::operation()
{
    if(implementor != nullptr)
        implementor->operationImplementation();
}
