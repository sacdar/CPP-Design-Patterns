#include <iostream>

#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

using namespace std;

int main(int argc, char *argv[])
{
    ConcreteSubject *s = new ConcreteSubject();
    ConcreteObserver *oX = new ConcreteObserver(s, "X");
    ConcreteObserver *oY = new ConcreteObserver(s, "Y");
    ConcreteObserver *oZ = new ConcreteObserver(s, "Z");

    s->attach(oX);
    s->attach(oY);
    s->attach(oZ);

    s->setState("ABC");
    s->notify();

    cout << "Deleting Y..." << endl;
    s->detach(oY);

    s->setState("AC");
    s->notify();

    delete oZ;
    delete oY;
    delete oX;
    delete s;

    return 0;
}
