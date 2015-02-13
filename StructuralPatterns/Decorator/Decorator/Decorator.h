#ifndef _DECORATOR_H_
#define _DECORATOR_H_

#include "Component.h"

class Decorator : public Component
{
private:
    Component *component;

public:
    Decorator(Component *component = nullptr) : component(component) {}

    void operation();
};

#endif /* _DECORATOR_H_ */
