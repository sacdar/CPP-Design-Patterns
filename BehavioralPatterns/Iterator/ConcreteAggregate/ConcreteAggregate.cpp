#include "ConcreteAggregate.h"
#include "ConcreteIterator.h"

unordered_map<int, void*>& ConcreteAggregate::getItems()
{
    return items;
}

int ConcreteAggregate::count()
{
    return items.size();
}

Iterator* ConcreteAggregate::createIterator()
{
    return new ConcreteIterator(this);
}
