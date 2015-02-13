#include "Singleton.h"

int main(int argc, char *argv[])
{
    Singleton *singleton = Singleton::getInstance();
    Singleton *singleton2 = Singleton::getInstance();

    cout << "The address of the singleton: " << singleton << endl;
    cout << "The address of the singleton2: " << singleton2 << endl;
    cout << "The value of the singleton: " << singleton->value << endl;
    singleton->value++;
    cout << "The value of the singleton: " << singleton->value << endl;
    cout << "The value of the singleton2: " << singleton2->value << endl;

    delete singleton;

    return 0;
}
