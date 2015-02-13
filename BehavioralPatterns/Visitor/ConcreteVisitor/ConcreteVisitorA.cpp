#include "ConcreteVisitorA.h"

void ConcreteVisitorA::visit(ConcreteElementA *element)
{
    cout << element->getName() << " visited by " << this->getName() << endl;
}

void ConcreteVisitorA::visit(ConcreteElementB *element)
{
    cout << element->getName() << " visited by " << this->getName() << endl;
}
