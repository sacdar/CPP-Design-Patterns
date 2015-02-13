#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

void ConcreteStateA::handle(Context * context)
{
    cout << "ConcreteStateA handle()" << endl;
    context->state = unique_ptr<State>(new ConcreteStateB());
}
