#ifndef _ELEMENT_H_
#define _ELEMENT_H_

class Visitor;
class Element
{
public:
    virtual void accept(Visitor *visitor) = 0;
};

#endif /* _ELEMENT_H_ */
