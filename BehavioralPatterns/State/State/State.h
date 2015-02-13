#ifndef _STATE_H_
#define _STATE_H_

#include <iostream>

#include "Context.h"

using namespace std;

class Context;
class State
{
protected:
    string name;

public:
    virtual void handle(Context *context) = 0;

    string& getName() { return this->name; }
};

#endif /* _STATE_H_ */
