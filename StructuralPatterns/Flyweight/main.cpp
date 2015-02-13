#include "FlyweightFactory.h"
#include "UnsharedConcreteFlyweight.h"

int main(int argc, char *argv[])
{
    int state = 22;

    FlyweightFactory *factory = new FlyweightFactory();

    Flyweight *fx = factory->getFlyweight("X");
    Flyweight *fy = factory->getFlyweight("Y");
    Flyweight *fz = factory->getFlyweight("Z");

    UnsharedConcreteFlyweight *fu = new UnsharedConcreteFlyweight();

    fx->statefulOperation(--state);
    fy->statefulOperation(--state);
    fz->statefulOperation(--state);

    fu->statefulOperation(--state);

    delete fu;

    delete fz;
    delete fy;
    delete fx;

    delete factory;

    return 0;
}
