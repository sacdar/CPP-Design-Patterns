#include "ObjectStructure.h"

void ObjectStructure::attach(Element *element)
{
    if(element != nullptr)
        elements.push_back(element);
}

void ObjectStructure::detach(Element *element)
{
    if(element != nullptr)
        elements.remove(element);
}

void ObjectStructure::accept(Visitor *visitor)
{
    for(auto &element : elements)
        element->accept(visitor);
}
