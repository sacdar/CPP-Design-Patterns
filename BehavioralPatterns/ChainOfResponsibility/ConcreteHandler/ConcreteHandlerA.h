#ifndef _CONCRETEHANDLERA_H_
#define _CONCRETEHANDLERA_H_

#include "Handler.h"

class ConcreteHandlerA : public Handler
{
public:
    void handleRequest(int request);
};

#endif /* _CONCRETEHANDLERA_H_ */
