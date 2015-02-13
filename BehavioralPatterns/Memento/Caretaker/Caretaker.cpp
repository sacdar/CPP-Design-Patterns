#include "Caretaker.h"

Caretaker::~Caretaker()
{
    if(memento != nullptr)
        delete memento;
}
