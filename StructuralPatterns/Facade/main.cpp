#include "Facade.h"

int main(int argc, char *argv[])
{
    Facade *facade = new Facade();

    facade->method1();
    facade->method2();

    delete facade;

    return 0;
}
