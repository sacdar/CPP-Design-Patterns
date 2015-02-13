#ifndef _FACADE_H_
#define _FACADE_H_

#include "SubSystemA.h"
#include "SubSystemB.h"
#include "SubSystemC.h"
#include "SubSystemD.h"

class Facade
{
private:
    SubSystemA *sA;
    SubSystemB *sB;
    SubSystemC *sC;
    SubSystemD *sD;

public:
    Facade();
    ~Facade();

    void method1();
    void method2();
};

#endif /* _FACADE_H_ */
