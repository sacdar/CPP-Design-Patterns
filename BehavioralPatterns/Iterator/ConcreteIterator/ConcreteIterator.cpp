#include "ConcreteIterator.h"

void* ConcreteIterator::first()
{
    current = 0;
    return aggregate->getItems()[current];
}

void* ConcreteIterator::next()
{
    void * ret = nullptr;

    ++current;
    if(current < aggregate->count())
        ret = aggregate->getItems()[current];

    return ret;
}

bool ConcreteIterator::isDone()
{
    return current >= aggregate->count();
}

void* ConcreteIterator::currentItem()
{
    return aggregate->getItems()[current];
}
