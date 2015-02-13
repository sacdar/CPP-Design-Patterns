#ifndef _COLLEAGUE_H_
#define _COLLEAGUE_H_

#include "Mediator.h"

class Mediator;

class Colleague
{
protected:
    Mediator *mediator;

public:
    Colleague(Mediator *mediator = nullptr) : mediator(mediator) {}
};

#endif /* _COLLEAGUE_H_ */
