#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <mutex>
using namespace std;

// Singleton
class Singleton
{
private:
    Singleton(int _value);

    static Singleton *instance;
    static mutex s_mutex;

    // Not defined, to prevent copying
    Singleton(const Singleton&);
    const Singleton& operator=(const Singleton&);

public:
    ~Singleton();

    int value;

    static Singleton* getInstance();
};

#endif /* _SINGLETON_H_ */
