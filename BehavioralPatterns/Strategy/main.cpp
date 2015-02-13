#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "ConcreteStrategyC.h"
#include "Context.h"

int main(int argc, char *argv[])
{
    ConcreteStrategyA *sA = new ConcreteStrategyA();
    ConcreteStrategyB *sB = new ConcreteStrategyB();
    ConcreteStrategyC *sC = new ConcreteStrategyC();
    Context *context = new Context(sA);

    context->contextInterface();

    context->setStrategy(sB);
    context->contextInterface();

    context->setStrategy(sC);
    context->contextInterface();

    delete sA;
    delete sB;
    delete sC;
    delete context;

    return 0;
}
