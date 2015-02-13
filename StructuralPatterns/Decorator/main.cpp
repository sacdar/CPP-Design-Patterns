#include <iostream>

#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

using namespace std;

int main(int argc, char *argv[])
{
    ConcreteComponent *c = new ConcreteComponent();
    ConcreteDecoratorA *dA = new ConcreteDecoratorA(c);
    ConcreteDecoratorB *dB = new ConcreteDecoratorB(dA);

    cout << "----------------------------------------" << endl;
    c->operation();
    cout << "----------------------------------------" << endl;
    dA->operation();
    cout << "----------------------------------------" << endl;
    dB->operation();
    cout << "----------------------------------------" << endl;

    delete c;
    delete dA;
    delete dB;

    return 0;
}
