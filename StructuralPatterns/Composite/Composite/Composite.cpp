#include "Composite.h"

void Composite::operation()
{
    #if 1
    vector<Component*>::iterator it;

    cout << name << endl;
    for(it=children.begin(); it!=children.end(); it++)
        (*it)->operation();
    #else // c++11
    cout << name << endl;
    for(auto &child : children)
        child->operation();
    #endif
}

void Composite::add(Component *component)
{
    children.push_back(component);
}

void Composite::remove(Component *component)
{
    vector<Component*>::iterator it;

    for(it=children.begin(); it!=children.end();) {
        if(*it == component) {
            children.erase(it);
            break;
        }
        else
            it++;
    }
}
