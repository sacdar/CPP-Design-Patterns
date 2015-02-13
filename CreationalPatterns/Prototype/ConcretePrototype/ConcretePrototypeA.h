#ifndef _CONCRETEPROTOTYPEA_H_
#define _CONCRETEPROTOTYPEA_H_

#include "Prototype.h"

class ConcretePrototypeA : public Prototype
{
public:
    ConcretePrototypeA(string type);
    Prototype* clone();
};

#endif /* _CONCRETEPROTOTYPEA_H_ */
