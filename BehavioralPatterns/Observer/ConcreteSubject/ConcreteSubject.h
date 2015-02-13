#ifndef _CONCRETESUBJECT_H_
#define _CONCRETESUBJECT_H_

#include <iostream>

#include "Subject.h"

using namespace std;

class ConcreteSubject : public Subject
{
private:
    string state;

public:
    string& getState();
    void setState(string state);
};

#endif /* _CONCRETESUBJECT_H_ */
