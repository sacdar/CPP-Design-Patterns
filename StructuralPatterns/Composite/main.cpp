#include "Composite.h"
#include "Leaf.h"

int main(int argc, char *argv[])
{
    Composite *root = new Composite("root");
    Composite *comp = new Composite("Composite X");
    Leaf leafA("Leaf A");
    Leaf leafB("Leaf B");
    Leaf leafC("Leaf C");
    Leaf leafD("Leaf D");
    Leaf leafXA("Leaf XA");
    Leaf leafXB("Leaf XB");

    root->add(&leafA);
    root->add(&leafB);

    comp->add(&leafXA);
    comp->add(&leafXB);

    root->add(comp);
    root->add(&leafC);

    root->add(&leafD);
    root->remove(&leafD);

    root->operation();

    delete comp;
    delete root;

    return 0;
}
