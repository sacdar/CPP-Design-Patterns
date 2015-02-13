#include "ConcreteElementA.h"

void ConcreteElementA::accept(Visitor *visitor)
{
    if(visitor != nullptr)
        visitor->visit(this);
}
