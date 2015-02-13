#include <iostream>

#include "ConcreteIterator.h"

using namespace std;

int main(int argc, char *argv[])
{
    ConcreteAggregate *cA =  new ConcreteAggregate();

    cA->getItems()[0] = (void*)&"ABC";
    cA->getItems()[1] = (void*)&"DEF";
    cA->getItems()[2] = (void*)&"GHI";

    cout << "count = " << cA->count() << endl;

    Iterator *cI = cA->createIterator();

    while(!cI->isDone()) {
        cout << (char*)cI->currentItem() << endl;
        (char*)cI->next();
    }

    delete cI;
    delete cA;

    return 0;
}
