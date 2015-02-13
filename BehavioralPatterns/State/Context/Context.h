#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <memory>

#include "State.h"

using namespace std;

class State;
class Context
{
public:
    unique_ptr<State> state;

    Context(State *state = nullptr) : state(state) {}

    void request();
};

#endif /* _CONTEXT_H_ */
