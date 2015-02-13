#include "AbstractClass.h"
#include "ConcreteClassA.h"
#include "ConcreteClassB.h"

int main(int argc, char *argv[])
{
    AbstractClass *aA = new ConcreteClassA();
    AbstractClass *aB = new ConcreteClassB();

    aA->TemplateMethod();
    aB->TemplateMethod();

    delete aA;
    delete aB;

    return 0;
}
