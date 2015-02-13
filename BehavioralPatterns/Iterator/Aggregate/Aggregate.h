#ifndef _AGGREGATE_H_
#define _AGGREGATE_H_

#include "Iterator.h"

class Aggregate
{
public:
    virtual Iterator* createIterator() = 0;
};

#endif /* _AGGREGATE_H_ */
