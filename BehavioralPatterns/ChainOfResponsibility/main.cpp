#include "ConcreteHandlerA.h"
#include "ConcreteHandlerB.h"
#include "ConcreteHandlerC.h"

int main(int argc, char *argv[])
{
    Handler *h1 = new ConcreteHandlerA();
    Handler *h2 = new ConcreteHandlerB();
    Handler *h3 = new ConcreteHandlerC();

    h1->setSuccessor(h2);
    h2->setSuccessor(h3);

    h1->handleRequest(0);
    h1->handleRequest(10);
    h1->handleRequest(20);

    delete h3;
    delete h2;
    delete h1;

    return 0;
}
