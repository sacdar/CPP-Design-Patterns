#ifndef _CONCRETEDECORATORB_H_
#define _CONCRETEDECORATORB_H_

#include "Decorator.h"

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(Component *component) : Decorator(component) {}
    void operation();

    void additionalOperation();
};

#endif /* _CONCRETEDECORATORB_H_ */
