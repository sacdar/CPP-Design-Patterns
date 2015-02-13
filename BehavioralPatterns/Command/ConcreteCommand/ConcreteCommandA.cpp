#include "ConcreteCommandA.h"

void ConcreteCommandA::execute()
{
    if(receiver != nullptr)
        receiver->action1();
}
