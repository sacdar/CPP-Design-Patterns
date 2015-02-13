#include "ConcretePrototypeA.h"
#include "ConcretePrototypeB.h"

int main(int argc, char *argv[])
{
    ConcretePrototypeA *pA = new ConcretePrototypeA("ConcretePrototypeA");
    cout << "ConcretePrototypeA address = " << pA << endl;
    ConcretePrototypeA *cA = (ConcretePrototypeA*)pA->clone();
    cout << "ConcretePrototypeA cloned address = " << cA << endl;
    cout << "PrototypeName = " << cA->getType() << endl;

    ConcretePrototypeB *pB = new ConcretePrototypeB("ConcretePrototypeB");
    cout << "ConcretePrototypeB address = " << pB << endl;
    ConcretePrototypeB *cB = (ConcretePrototypeB*)pB->clone();
    cout << "ConcretePrototypeB cloned address = " << cB << endl;
    cout << "PrototypeName = " << cB->getType() << endl;

    delete pA;
    delete cA;

    delete pB;
    delete cB;

    return 0;
}
