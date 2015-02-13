#ifndef _CONCRETESTATEB_H_
#define _CONCRETESTATEB_H_

#include "State.h"
#include "Context.h"

class ConcreteStateB : public State
{
public:
    ConcreteStateB() { this->name = "ConcreteStateB"; }

    void handle(Context *context);
};

#endif /* _CONCRETESTATEB_H_ */
