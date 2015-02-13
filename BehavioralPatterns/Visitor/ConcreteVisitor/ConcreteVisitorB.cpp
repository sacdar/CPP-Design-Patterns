#include "ConcreteVisitorB.h"

void ConcreteVisitorB::visit(ConcreteElementA *element)
{
    cout << element->getName() << " visited by " << this->getName() << endl;
}

void ConcreteVisitorB::visit(ConcreteElementB *element)
{
    cout << element->getName() << " visited by " << this->getName() << endl;
}
