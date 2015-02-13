#ifndef _CREATOR_H_
#define _CREATOR_H_

#include <iostream>
#include "Product.h"

using namespace std;

// Creator
class Creator
{
public:
    virtual Product* factoryMethod(string product) = 0;
};

#endif /* _CREATOR_H_ */
