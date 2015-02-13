#include <iostream>

#include "ConcreteDecoratorA.h"

using namespace std;

void ConcreteDecoratorA::operation()
{
    Decorator::operation();
    additionalOperation();
    cout << "ConcreteDecoratorA operation()" << endl;
}

void ConcreteDecoratorA::additionalOperation()
{
    cout << "ConcreteDecoratorA additionalOperation()" << endl;
}
