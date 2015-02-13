#include "RefinedAbstraction.h"

void RefinedAbstraction::operation()
{
    if(implementor != nullptr)
        implementor->operationImplementation();
}
