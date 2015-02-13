#include "ObjectStructure.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"
#include "ConcreteVisitorA.h"
#include "ConcreteVisitorB.h"

int main(int argc, char *argv[])
{
    ObjectStructure *o = new ObjectStructure();
    ConcreteElementA *eA = new ConcreteElementA();
    ConcreteElementB *eB = new ConcreteElementB();

    o->attach(eA);
    o->attach(eB);

    ConcreteVisitorA *vA = new ConcreteVisitorA();
    ConcreteVisitorB *vB = new ConcreteVisitorB();

    o->accept(vA);
    o->accept(vB);

    delete vB;
    delete vA;

    delete eB;
    delete eA;

    delete o;

    return 0;
}
