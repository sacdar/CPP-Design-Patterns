#include <iostream>

#include "UnsharedConcreteFlyweight.h"

using namespace std;

void UnsharedConcreteFlyweight::statefulOperation(int state)
{
    cout << "UnsharedConcreteFlyweight = " << state << endl;
}
