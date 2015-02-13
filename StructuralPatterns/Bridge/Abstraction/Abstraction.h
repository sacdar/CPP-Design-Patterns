#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

#include "Implementor.h"

class Abstraction
{
public:
    Implementor *implementor;

    Abstraction() : implementor(nullptr) {}

    virtual void operation();
};

#endif /* _ABSTRACTION_H_ */
