#include "ConcretePrototypeB.h"

ConcretePrototypeB::ConcretePrototypeB(string type)
{
    this->type = type;
};

Prototype* ConcretePrototypeB::clone()
{
    return new ConcretePrototypeB(*this);
}
