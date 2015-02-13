#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Receiver.h"

class Command
{
protected:
    Receiver *receiver;

public:
    Command(Receiver *receiver = nullptr) : receiver(receiver) {}

    virtual void execute() = 0;
};

#endif /* _COMMAND_H_ */
