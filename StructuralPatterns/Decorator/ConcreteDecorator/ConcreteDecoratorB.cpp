#include <iostream>

#include "ConcreteDecoratorB.h"

using namespace std;

void ConcreteDecoratorB::operation()
{
    Decorator::operation();
    additionalOperation();
    cout << "ConcreteDecoratorB operation()" << endl;
}

void ConcreteDecoratorB::additionalOperation()
{
    cout << "ConcreteDecoratorB additionalOperation()" << endl;
}
