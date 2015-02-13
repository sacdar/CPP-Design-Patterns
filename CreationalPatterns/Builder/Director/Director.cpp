#include "Director.h"

void Director::contruct(Builder* builder)
{
    builder->buildPartA();
    builder->buildPartB();
}
