#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Product.h"

class Builder
{
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;
};

#endif /* _BUILDER_H_ */
