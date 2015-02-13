#ifndef _LEAF_H_
#define _LEAF_H_

#include "Component.h"

class Leaf : public Component
{
public:
    Leaf(string name) : Component(name) {}

    void operation();
};

#endif /* _LEAF_H_ */
