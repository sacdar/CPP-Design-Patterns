#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <iostream>

using namespace std;

class Component
{
protected:
    string name;

public:
    Component(string name) : name(name) {}

    virtual void operation() = 0;
};

#endif /* _COMPONENT_H_ */
