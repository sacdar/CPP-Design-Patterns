#ifndef _FLYWEIGHTFACTORY_H_
#define _FLYWEIGHTFACTORY_H_

#include <iostream>
#include <unordered_map>

#include "Flyweight.h"

using namespace std;

class FlyweightFactory
{
private:
    unordered_map<string, Flyweight*> flyweights;

public:
    Flyweight* getFlyweight(string key);
};

#endif /* _FLYWEIGHTFACTORY_H_ */
