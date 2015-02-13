#ifndef _CONCRETEAGGREGATE_H_
#define _CONCRETEAGGREGATE_H_

#include <unordered_map>

#include "Aggregate.h"

using namespace std;

class ConcreteAggregate : public Aggregate
{
private:
    unordered_map<int, void*> items;

public:
    unordered_map<int, void*>& getItems();
    int count();

    Iterator* createIterator();
};

#endif /* _CONCRETEAGGREGATE_H_ */
