#ifndef _CARETAKER_H_
#define _CARETAKER_H_

#include "Memento.h"

class Caretaker
{
public:
    Memento *memento;

    Caretaker() : memento(nullptr) {}
    ~Caretaker();
};

#endif /* _CARETAKER_H_ */
