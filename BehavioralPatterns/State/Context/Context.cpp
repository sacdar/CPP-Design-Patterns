#include "Context.h"

void Context::request()
{
    if(state != nullptr)
        state->handle(this);
}
