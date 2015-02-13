#include <iostream>
#include "ConcreteBuilder.h"
#include "Director.h"

using namespace std;

int main(int agrc, char *argv[])
{
    Product *p;
    Director director;

    ConcreteBuilder1 builder1;
    ConcreteBuilder2 builder2;

    director.contruct(&builder1);
    p = builder1.getResult();
    p->showSpec();

    director.contruct(&builder2);
    p = builder2.getResult();
    p->showSpec();

    return 0;
}