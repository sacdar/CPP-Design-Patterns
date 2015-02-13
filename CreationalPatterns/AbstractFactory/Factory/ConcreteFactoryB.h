#ifndef _CONCRETEFACTORYB_H_
#define _CONCRETEFACTORYB_H_

#include "AbstractFactory.h"

// ConcreteFactoryB
class ConcreteFactoryB : public AbstractFactory
{
public:
    AbstractProductA* createProductA();
    AbstractProductB* createProductB();
};

#endif /* _CONCRETEFACTORYB_H_ */
