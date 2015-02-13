#ifndef _CONCRETEITERATOR_H_
#define _CONCRETEITERATOR_H_

#include "Iterator.h"
#include "ConcreteAggregate.h"

class ConcreteIterator : public Iterator
{
private:
    ConcreteAggregate *aggregate;
    int current;

public:
    ConcreteIterator(ConcreteAggregate *aggregate = nullptr) : aggregate(aggregate), current(0) {}

    void* first();
    void* next();
    bool isDone();
    void* currentItem();
};

#endif /* _CONCRETEITERATOR_H_ */
