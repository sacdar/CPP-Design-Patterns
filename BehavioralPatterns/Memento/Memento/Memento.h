#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <iostream>

using namespace std;

class Memento
{
private:
    string state;

public:
    Memento(string state) : state(state) {}

    string& getState();
};

#endif /* _MEMENTO_H_ */
