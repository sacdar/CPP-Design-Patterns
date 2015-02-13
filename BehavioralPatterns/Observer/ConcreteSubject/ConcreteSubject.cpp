#include "ConcreteSubject.h"

string& ConcreteSubject::getState()
{
    return this->state;
}

void ConcreteSubject::setState(string state)
{
    this->state = state;
}
