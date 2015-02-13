#ifndef _CONCRETEPROTOTYPEB_H_
#define _CONCRETEPROTOTYPEB_H_

#include "Prototype.h"

class ConcretePrototypeB : public Prototype
{
public:
    ConcretePrototypeB(string type);
    Prototype* clone();
};

#endif /* _CONCRETEPROTOTYPEB_H_ */
