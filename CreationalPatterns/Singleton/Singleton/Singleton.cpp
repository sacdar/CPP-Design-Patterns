#include "Singleton.h"

Singleton* Singleton::instance = nullptr;
mutex Singleton::s_mutex;

Singleton::Singleton(int _value) : value(_value)
{
    cout << "In Constructor" << endl;
}

Singleton::~Singleton()
{
    cout << "In Destructor" << endl;
}

Singleton* Singleton::getInstance()
{
    s_mutex.lock();
    if(instance == nullptr)
        instance = new Singleton(1);
    s_mutex.unlock();

    return instance;
}
