#include "ConcreteCreatorA.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

Product* ConcreteCreatorA::factoryMethod(string product)
{
    if(product == "ProductA")
        return new ConcreteProductA();
    else if(product == "ProductB")
        return new ConcreteProductB();
    return nullptr;
};
