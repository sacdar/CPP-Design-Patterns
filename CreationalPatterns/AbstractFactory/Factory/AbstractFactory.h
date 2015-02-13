#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

#include "AbstractProductA.h"
#include "AbstractProductB.h"

// AbstractFactory
class AbstractFactory
{
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
};

#endif /* _ABSTRACTFACTORY_H_ */
