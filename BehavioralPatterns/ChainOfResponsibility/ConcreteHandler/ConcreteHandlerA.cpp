#include <iostream>

#include "ConcreteHandlerA.h"

using namespace std;

void ConcreteHandlerA::handleRequest(int request)
{
    if(request >= 0 && request < 10)
        cout << "ConcreteHandlerA request = " << request << endl;
    else if(successor != nullptr)
        successor->handleRequest(request);
}
