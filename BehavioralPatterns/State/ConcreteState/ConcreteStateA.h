#ifndef _CONCRETESTATEA_H_
#define _CONCRETESTATEA_H_

#include "State.h"
#include "Context.h"

class ConcreteStateA : public State
{
public:
    ConcreteStateA() { this->name = "ConcreteStateA"; }

    void handle(Context *context);
};

#endif /* _CONCRETESTATEA_H_ */
