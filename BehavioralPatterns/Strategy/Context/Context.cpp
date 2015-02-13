#include "Context.h"

void Context::setStrategy(Strategy *strategy)
{
    this->strategy = strategy;
}

void Context::contextInterface()
{
    if(strategy != nullptr)
        strategy->algorithmInterface();
}
