#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

#include "Colleague.h"

class Colleague;

class Mediator
{
public:
    virtual void send(Colleague *colleague) = 0;
};

#endif /* _MEDIATOR_H_ */
