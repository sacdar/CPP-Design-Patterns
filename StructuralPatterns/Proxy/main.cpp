#include "Proxy.h"

int main(int argc, char *argv[])
{
    Proxy *proxy = new Proxy();

    proxy->performAction();

    delete proxy;

    return 0;
}
