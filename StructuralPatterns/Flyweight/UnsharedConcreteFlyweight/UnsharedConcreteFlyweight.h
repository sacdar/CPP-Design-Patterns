#ifndef _UNSHAREDCONCRETEFLYWEIGHT_H_
#define _UNSHAREDCONCRETEFLYWEIGHT_H_

#include "Flyweight.h"

class UnsharedConcreteFlyweight : public Flyweight
{
public:
    void statefulOperation(int state);
};

#endif /* _UNSHAREDCONCRETEFLYWEIGHT_H_ */
