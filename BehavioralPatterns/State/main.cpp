#include "ConcreteStateA.h"
#include "Context.h"

int main(int argc, char *argv[])
{
    Context *c = new Context(new ConcreteStateA());

    c->request();
    c->request();
    c->request();
    c->request();
    c->request();

    delete c;

    return 0;
}
