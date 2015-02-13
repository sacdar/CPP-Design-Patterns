#ifndef _CONCRETEFACTORYA_H_
#define _CONCRETEFACTORYA_H_

#include "AbstractFactory.h"

// ConcreteFactoryA
class ConcreteFactoryA : public AbstractFactory
{
public:
    AbstractProductA* createProductA();
    AbstractProductB* createProductB();
};

#endif /* _CONCRETEFACTORYA_H_ */
