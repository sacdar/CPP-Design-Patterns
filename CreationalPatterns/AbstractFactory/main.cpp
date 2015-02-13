#include "AbstractFactory.h"
#include "ConcreteFactoryA.h"
#include "ConcreteFactoryB.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

int main(int argc, char *argv[])
{
    AbstractFactory *abstractFactory;
    AbstractProductA *abtracyProductA;
    AbstractProductB *abtracyProductB;

    abstractFactory = new ConcreteFactoryA();
    abtracyProductA = abstractFactory->createProductA();
    abtracyProductA->printProduct();
    abtracyProductB = abstractFactory->createProductB();
    abtracyProductB->printProduct();

    delete abstractFactory;
    delete abtracyProductA;
    delete abtracyProductB;

    abstractFactory = new ConcreteFactoryB();
    abtracyProductA = abstractFactory->createProductA();
    abtracyProductA->printProduct();
    abtracyProductB = abstractFactory->createProductB();
    abtracyProductB->printProduct();

    delete abstractFactory;
    delete abtracyProductA;
    delete abtracyProductB;

    return 0;
}
