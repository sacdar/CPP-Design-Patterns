#include "Decorator.h"

void Decorator::operation()
{
    if(component != nullptr)
        component->operation();
}
