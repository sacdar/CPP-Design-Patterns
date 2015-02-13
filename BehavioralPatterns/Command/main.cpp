#include "Command.h"
#include "ConcreteCommandA.h"
#include "ConcreteCommandB.h"
#include "Invoker.h"

int main(int argc, char *argv[])
{
    Receiver *receiver = new Receiver();
    Command *commandA = new ConcreteCommandA(receiver);
    Command *commandB = new ConcreteCommandB(receiver);
    Invoker *invoker = new Invoker();

    invoker->setCommand(commandA);
    invoker->setCommand(commandB);

    invoker->executeCommand();

    delete receiver;
    delete commandA;
    delete commandB;
    delete invoker;

    return 0;
}
