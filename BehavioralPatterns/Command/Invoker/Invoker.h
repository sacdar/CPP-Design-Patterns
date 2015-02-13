#ifndef _INVOKER_H_
#define _INVOKER_H_

#include <vector>

#include "Command.h"

using namespace std;

class Invoker
{
private:
    vector<Command*> commands;

public:
    void setCommand(Command *command);
    void executeCommand();
};

#endif /* _INVOKER_H_ */
