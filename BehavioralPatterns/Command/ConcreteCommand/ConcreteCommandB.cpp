#include "ConcreteCommandB.h"

void ConcreteCommandB::execute()
{
    if(receiver != nullptr)
        receiver->action2();
}
