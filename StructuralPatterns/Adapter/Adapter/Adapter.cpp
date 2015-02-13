#include "Adapter.h"

void Adapter::methodA()
{
    if(adaptee != nullptr)
        adaptee->methodB();
}
