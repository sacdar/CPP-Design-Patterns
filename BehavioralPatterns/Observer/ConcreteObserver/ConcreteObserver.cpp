#include "ConcreteObserver.h"

void ConcreteObserver::update()
{
    this->observerState = subject->getState();
    cout << "Observer " << this->name << "'s new state is " << this->observerState << endl;
}

ConcreteSubject* ConcreteObserver::getSubject()
{
    return this->subject;
}

void ConcreteObserver::setSubject(ConcreteSubject* concreteSubject)
{
    this->subject = concreteSubject;
}
