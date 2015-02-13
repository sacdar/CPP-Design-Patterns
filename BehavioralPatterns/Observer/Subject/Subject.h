#ifndef _SUBJECT_H_
#define _SUBJECT_H_

#include <list>

#include "Observer.h"

using namespace std;

class Subject
{
private:
    list<Observer*> observers;

public:
    void attach(Observer *observer);
    void detach(Observer *observer);
    void notify();
};

#endif /* _SUBJECT_H_ */
