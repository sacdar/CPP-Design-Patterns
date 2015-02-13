#include <iostream>

#include "Subject.h"

void Subject::attach(Observer * observer)
{
    if(observer != nullptr)
        observers.push_back(observer);
}

void Subject::detach(Observer * observer)
{
    if(observer != nullptr)
        observers.remove(observer);
}

void Subject::notify()
{
    for(auto &observer : observers)
        observer->update();
}
