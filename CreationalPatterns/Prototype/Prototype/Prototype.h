#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

#include <iostream>
using namespace std;

class Prototype
{
protected:
    string type;

public:
    string getType()
    {
        return type;
    }

    virtual Prototype* clone() = 0;
};

#endif /* _PROTOTYPE_H_ */
