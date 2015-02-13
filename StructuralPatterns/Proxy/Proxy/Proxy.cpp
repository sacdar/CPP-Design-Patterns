#include "Proxy.h"

void Proxy::performAction()
{
    if(realSubject == nullptr)
        realSubject = new RealSubject();

    realSubject->performAction();
}
