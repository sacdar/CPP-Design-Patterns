#ifndef _ADAPTER_H_
#define _ADAPTER_H_

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target
{
private:
    Adaptee *adaptee;

public:
    Adapter(Adaptee* adaptee = nullptr) : adaptee(adaptee) {}
    void methodA();
};

#endif /* _ADAPTER_H_ */
