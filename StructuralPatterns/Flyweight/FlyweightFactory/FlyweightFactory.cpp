#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"

Flyweight* FlyweightFactory::getFlyweight(string key)
{
    if(flyweights.find(key) != flyweights.end()) {
        return flyweights.find(key)->second;
    } else {
        ConcreteFlyweight *newFlyweight = new ConcreteFlyweight();

        flyweights[key] = newFlyweight;

        return newFlyweight;
    }
}
