#ifndef _CONCRETEELEMENTB_H_
#define _CONCRETEELEMENTB_H_

#include <iostream>

#include "Element.h"
#include "Visitor.h"

using namespace std;

class ConcreteElementB : public Element
{
private:
    string name;

public:
    ConcreteElementB() : name("ConcreteElementB") {}

    void accept(Visitor *visitor);

    string& getName() { return this->name; }
};

#endif /* _CONCRETEELEMENTB_H_ */
