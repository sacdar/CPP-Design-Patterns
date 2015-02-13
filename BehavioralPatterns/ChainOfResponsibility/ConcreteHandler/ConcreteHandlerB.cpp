#include <iostream>

#include "ConcreteHandlerB.h"

using namespace std;

void ConcreteHandlerB::handleRequest(int request)
{
    if(request >= 10 && request < 20)
        cout << "ConcreteHandlerB request = " << request << endl;
    else if(successor != nullptr)
        successor->handleRequest(request);
}
