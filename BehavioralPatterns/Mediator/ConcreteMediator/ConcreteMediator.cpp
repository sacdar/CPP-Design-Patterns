#include "ConcreteMediator.h"

void ConcreteMediator::send(Colleague *colleague)
{
    if(colleague == concreteColleagueA)
        concreteColleagueB->receive();
    else if(colleague == concreteColleagueB)
        concreteColleagueA->receive();
}
