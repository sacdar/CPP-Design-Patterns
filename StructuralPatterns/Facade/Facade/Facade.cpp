#include <iostream>

#include "Facade.h"

using namespace std;

Facade::Facade() : sA(nullptr), sB(nullptr), sC(nullptr), sD(nullptr)
{
    sA = new SubSystemA();
    sB = new SubSystemB();
    sC = new SubSystemC();
    sD = new SubSystemD();
}

Facade::~Facade()
{
    if(sA != nullptr)
        delete sA;
    if(sB != nullptr)
        delete sB;
    if(sC != nullptr)
        delete sC;
    if(sD != nullptr)
        delete sD;
}

void Facade::method1()
{
    cout << "Facade method1()" << endl;
    sA->method();
    sB->method();
    sD->method();
}

void Facade::method2()
{
    cout << "Facade method2()" << endl;
    sB->method();
    sC->method();
}
