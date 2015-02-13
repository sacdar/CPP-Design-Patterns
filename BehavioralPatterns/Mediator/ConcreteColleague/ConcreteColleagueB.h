#ifndef _CONCRETECOLLEAGUEB_H_
#define _CONCRETECOLLEAGUEB_H_

#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleagueB : public Colleague
{
public:
    ConcreteColleagueB(Mediator *mediator = nullptr) : Colleague(mediator) {}

    void send();
    void receive();
};

#endif /* _CONCRETECOLLEAGUEB_H_ */
