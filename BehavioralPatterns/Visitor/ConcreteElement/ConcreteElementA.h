#ifndef _CONCRETEELEMENTA_H_
#define _CONCRETEELEMENTA_H_

#include <iostream>

#include "Element.h"
#include "Visitor.h"

using namespace std;

class ConcreteElementA : public Element
{
private:
    string name;

public:
    ConcreteElementA() : name("ConcreteElementA") {}

    void accept(Visitor *visitor);

    string& getName() { return this->name; }
};

#endif /* _CONCRETEELEMENTA_H_ */
