#ifndef _ORIGINATOR_H_
#define _ORIGINATOR_H_

#include <iostream>

#include "Memento.h"

using namespace std;

class Originator
{
private:
    string state;

public:
    string& getState();
    void setState(string state);

    Memento* createMemento();
    void setMemento(Memento *memento);
};

#endif /* _ORIGINATOR_H_ */
