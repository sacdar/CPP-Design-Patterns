#include <vector>
#include "ConcreteCreatorA.h"

int main(int argc, char *argv[])
{
    Creator *creators = new ConcreteCreatorA();
    vector<Product*> products;
    int idx = 0;

    products.push_back(creators->factoryMethod("ProductA"));
    products.push_back(creators->factoryMethod("ProductB"));
    products.push_back(creators->factoryMethod("ProductB"));
    products.push_back(creators->factoryMethod("ProductA"));

    for(idx=0; idx<products.size(); idx++)
        products[idx]->printProduct();
    for(idx=0; idx<products.size(); idx++)
        delete products[idx];

    delete creators;

    return 0;
}
