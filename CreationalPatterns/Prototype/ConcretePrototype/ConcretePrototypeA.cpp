#include "ConcretePrototypeA.h"

ConcretePrototypeA::ConcretePrototypeA(string type)
{
    this->type = type;
};

Prototype* ConcretePrototypeA::clone()
{
    return new ConcretePrototypeA(*this);
}
