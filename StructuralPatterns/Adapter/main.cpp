#include "Adapter.h"

int main(int argc, char *argv[])
{
    Adaptee *adaptee = new Adaptee();
    Target *target =  new Adapter(adaptee);

    target->methodA();

    delete target;
    delete adaptee;

    return 0;
}
