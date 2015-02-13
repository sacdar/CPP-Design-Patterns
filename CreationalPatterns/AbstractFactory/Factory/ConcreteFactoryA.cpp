#include "ConcreteFactoryA.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

AbstractProductA* ConcreteFactoryA::createProductA()
{
    return new ConcreteProductA1;
}
AbstractProductB* ConcreteFactoryA::createProductB()
{
    return new ConcreteProductB1;
}
