#include <iostream>

#include "ConcreteColleagueB.h"

using namespace std;

void ConcreteColleagueB::send()
{
    cout << "ConcreteColleagueB send()" << endl;
    mediator->send(this);
}

void ConcreteColleagueB::receive()
{
    cout << "ConcreteColleagueB receive()" << endl;
}
