#include "Originator.h"
#include "Caretaker.h"

int main(int argc, char *argv[])
{
    Originator *o = new Originator();
    Caretaker *c = new Caretaker();

    o->setState("On");

    c->memento = o->createMemento();

    o->setState("Off");

    o->setMemento(c->memento);

    delete c;
    delete o;

    return 0;
}
