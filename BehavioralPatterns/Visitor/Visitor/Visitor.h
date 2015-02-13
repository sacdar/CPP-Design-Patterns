#ifndef _VISITOR_H_
#define _VISITOR_H_

class ConcreteElementA;
class ConcreteElementB;

class Visitor
{
public:
    virtual void visit(ConcreteElementA *element) = 0;
    virtual void visit(ConcreteElementB *element) = 0;
};

#endif /* _VISITOR_H_ */
