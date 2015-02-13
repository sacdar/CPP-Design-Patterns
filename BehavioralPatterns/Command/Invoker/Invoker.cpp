#include <iostream>

#include "Invoker.h"

void Invoker::setCommand(Command *command)
{
    if(command != nullptr)
        commands.push_back(command);
}

void Invoker::executeCommand()
{
    for(auto &command : commands)
        command->execute();
}
