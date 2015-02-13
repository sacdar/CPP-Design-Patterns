#ifndef _CONCRETEVISITORB_H_
#define _CONCRETEVISITORB_H_

#include <iostream>

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

using namespace std;

class ConcreteVisitorB : public Visitor
{
private:
    string name;

public:
    ConcreteVisitorB() : name("ConcreteVisitorB") {}

    string& getName() { return this->name; }

    void visit(ConcreteElementA *element);
    void visit(ConcreteElementB *element);
};

#endif /* _CONCRETEVISITORB_H_ */
