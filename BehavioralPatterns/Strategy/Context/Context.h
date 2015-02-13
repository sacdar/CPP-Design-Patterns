#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include "Strategy.h"

class Context
{
private:
    Strategy *strategy;

public:
    Context(Strategy *strategy = nullptr) : strategy(strategy) {}

    void setStrategy(Strategy *strategy);
    void contextInterface();
};

#endif /* _CONTEXT_H_ */
