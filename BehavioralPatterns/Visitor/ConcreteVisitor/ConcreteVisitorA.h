#ifndef _CONCRETEVISITORA_H_
#define _CONCRETEVISITORA_H_

#include <iostream>

#include "Visitor.h"
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

using namespace std;

class ConcreteVisitorA : public Visitor
{
private:
    string name;

public:
    ConcreteVisitorA() : name("ConcreteVisitorA") {}

    string& getName() { return this->name; }

    void visit(ConcreteElementA *element);
    void visit(ConcreteElementB *element);
};

#endif /* _CONCRETEVISITORA_H_ */
