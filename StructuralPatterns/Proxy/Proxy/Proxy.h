#ifndef _PROXY_H_
#define _PROXY_H_

#include "RealSubject.h"

class Proxy : public Subject
{
private:
    RealSubject *realSubject;

public:
    Proxy() : realSubject(nullptr) {}
    ~Proxy() { if(realSubject != nullptr) delete realSubject; }

    void performAction();
};

#endif /* _PROXY_H_ */
