#ifndef _CONCRETEMEDIATOR_H_
#define _CONCRETEMEDIATOR_H_

#include "Mediator.h"
#include "ConcreteColleagueA.h"
#include "ConcreteColleagueB.h"

class ConcreteMediator : public Mediator
{
public:
    ConcreteColleagueA *concreteColleagueA;
    ConcreteColleagueB *concreteColleagueB;

    void send(Colleague *colleague);
};

#endif /* _CONCRETEMEDIATOR_H_ */
