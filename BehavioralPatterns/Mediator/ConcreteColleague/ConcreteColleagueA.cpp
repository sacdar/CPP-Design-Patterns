#include <iostream>

#include "ConcreteColleagueA.h"

using namespace std;

void ConcreteColleagueA::send()
{
    cout << "ConcreteColleagueA send()" << endl;
    mediator->send(this);
}

void ConcreteColleagueA::receive()
{
    cout << "ConcreteColleagueA receive()" << endl;
}
