#ifndef _PRODUCT_H_
#define _PRODUCT_H_

#include <iostream>

using namespace std;

class ProductPartA
{
public:
    string madeIn;
};

class ProductPartB
{
public:
    string name;
};

class Product
{
public:
    ProductPartA pa;
    ProductPartB pb;

    void showSpec();
};

#endif /* _PRODUCT_H_ */
