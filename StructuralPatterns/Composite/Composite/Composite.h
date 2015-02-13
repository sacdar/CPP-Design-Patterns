#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_

#include <vector>

#include "Component.h"

class Composite : public Component
{
private:
    vector<Component*> children;

public:
    Composite(string name) : Component(name) {}

    void operation();

    void add(Component *component);
    void remove(Component *component);
};

#endif /* _COMPOSITE_H_ */
