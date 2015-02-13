#ifndef _CONCRETECOMMANDA_H_
#define _CONCRETECOMMANDA_H_

#include "Command.h"

class ConcreteCommandA : public Command
{
public:
    ConcreteCommandA(Receiver *receiver = nullptr) : Command(receiver) {}

    void execute();
};

#endif /* _CONCRETECOMMANDA_H_ */
