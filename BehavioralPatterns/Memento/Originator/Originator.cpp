#include "Originator.h"

string& Originator::getState()
{
    return this->state;
}

void Originator::setState(string state)
{
    this->state = state;
    cout << "State = " << this->state << endl;
}

Memento* Originator::createMemento()
{
    return new Memento(state);
}

void Originator::setMemento(Memento *memento)
{
    cout << "Restoring state..." << endl;
    setState(memento->getState());
}
