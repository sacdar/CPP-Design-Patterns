#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

int main(int argc, char *argv[])
{
    Abstraction *ab = new RefinedAbstraction();

    ab->implementor =  new ConcreteImplementorA();
    ab->operation();

    delete ab->implementor;

    ab->implementor =  new ConcreteImplementorB();
    ab->operation();

    delete ab->implementor;

    delete ab;

    return 0;
}
