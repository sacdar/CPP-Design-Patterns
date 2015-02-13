#ifndef _CONCRETECREATORA_H_
#define _CONCRETECREATORA_H_

#include "Creator.h"

// ConcreteCreator
class ConcreteCreatorA : public Creator
{
public:
    Product* factoryMethod(string product);
};

#endif /* _CONCRETECREATORA_H_ */
