#include "ConcreteFactoryB.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

AbstractProductA* ConcreteFactoryB::createProductA()
{
    return new ConcreteProductA2;
}
AbstractProductB* ConcreteFactoryB::createProductB()
{
    return new ConcreteProductB2;
}
