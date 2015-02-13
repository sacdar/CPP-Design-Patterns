#ifndef _CONCRETEOBSERVER_H_
#define _CONCRETEOBSERVER_H_

#include <iostream>

#include "Observer.h"
#include "ConcreteSubject.h"

using namespace std;

class ConcreteObserver : public Observer
{
private:
    string name;
    string observerState;
    ConcreteSubject *subject;

public:
    ConcreteObserver(ConcreteSubject *subject, string name) : subject(subject), name(name) {}

    void update();

    ConcreteSubject* getSubject();
    void setSubject(ConcreteSubject* concreteSubject);
};

#endif /* _CONCRETEOBSERVER_H_ */
