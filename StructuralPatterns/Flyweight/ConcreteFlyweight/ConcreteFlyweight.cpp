#include <iostream>

#include "ConcreteFlyweight.h"

using namespace std;

void ConcreteFlyweight::statefulOperation(int state)
{
    cout << "ConcreteFlyweight = " << state << endl;
}
