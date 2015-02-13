#include <iostream>

#include "ConcreteHandlerC.h"

using namespace std;

void ConcreteHandlerC::handleRequest(int request)
{
    if(request >= 20 && request < 30)
        cout << "ConcreteHandlerC request = " << request << endl;
    else if(successor != nullptr)
        successor->handleRequest(request);
}
