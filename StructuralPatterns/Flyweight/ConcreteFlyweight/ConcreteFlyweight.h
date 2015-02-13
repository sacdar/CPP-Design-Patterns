#ifndef _CONCRETEFLYWEIGHT_H_
#define _CONCRETEFLYWEIGHT_H_

#include "Flyweight.h"

class ConcreteFlyweight : public Flyweight
{
public:
    void statefulOperation(int state);
};

#endif /* _CONCRETEFLYWEIGHT_H_ */
