#ifndef _CONCRETECOLLEAGUEA_H_
#define _CONCRETECOLLEAGUEA_H_

#include "Colleague.h"
#include "Mediator.h"

class ConcreteColleagueA : public Colleague
{
public:
    ConcreteColleagueA(Mediator *mediator = nullptr) : Colleague(mediator) {}

    void send();
    void receive();
};

#endif /* _CONCRETECOLLEAGUEA_H_ */
