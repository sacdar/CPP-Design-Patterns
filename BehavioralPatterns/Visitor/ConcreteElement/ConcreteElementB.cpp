#include "ConcreteElementB.h"

void ConcreteElementB::accept(Visitor *visitor)
{
    if(visitor != nullptr)
        visitor->visit(this);
}
