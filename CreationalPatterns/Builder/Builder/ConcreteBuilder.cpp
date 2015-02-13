#include "ConcreteBuilder.h"

void ConcreteBuilder1::buildPartA()
{
    product.pa.madeIn = "ConcreteBuilder1";
}

void ConcreteBuilder1::buildPartB()
{
    product.pb.name = "Product";
}

Product* ConcreteBuilder1::getResult()
{
    return &product;
}

void ConcreteBuilder2::buildPartA()
{
    product.pa.madeIn = "ConcreteBuilder2";
}

void ConcreteBuilder2::buildPartB()
{
    product.pb.name = "Product";
}

Product* ConcreteBuilder2::getResult()
{
    return &product;
}
