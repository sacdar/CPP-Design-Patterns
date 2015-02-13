#ifndef _OBJECTSTRUCTURE_H_
#define _OBJECTSTRUCTURE_H_

#include <list>

#include "Element.h"
#include "Visitor.h"

using namespace std;

class ObjectStructure
{
private:
    list<Element*> elements;

public:
    void attach(Element *element);
    void detach(Element *element);
    void accept(Visitor *visitor);
};

#endif /* _OBJECTSTRUCTURE_H_ */
