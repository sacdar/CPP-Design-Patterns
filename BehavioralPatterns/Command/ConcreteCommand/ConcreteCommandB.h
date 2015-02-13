#ifndef _CONCRETECOMMANDB_H_
#define _CONCRETECOMMANDB_H_

#include "Command.h"

class ConcreteCommandB : public Command
{
public:
    ConcreteCommandB(Receiver *receiver = nullptr) : Command(receiver) {}

    void execute();
};

#endif /* _CONCRETECOMMANDB_H_ */
