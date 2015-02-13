#ifndef _CONCRETEDECORATORA_H_
#define _CONCRETEDECORATORA_H_

#include "Decorator.h"

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(Component *component) : Decorator(component) {}
    void operation();

    void additionalOperation();
};

#endif /* _CONCRETEDECORATORA_H_ */
