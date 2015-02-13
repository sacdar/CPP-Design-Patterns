#ifndef _CONCRETEBUILDER_H_
#define _CONCRETEBUILDER_H_

#include "Builder.h"

class ConcreteBuilder1 : public Builder
{
private:
    Product product;

public:
    void buildPartA();
    void buildPartB();
    Product* getResult();
};

class ConcreteBuilder2 : public Builder
{
private:
    Product product;

public:
    void buildPartA();
    void buildPartB();
    Product* getResult();
};

#endif /* _CONCRETEBUILDER_H_ */
