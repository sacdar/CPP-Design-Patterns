#include "ConcreteStateB.h"
#include "ConcreteStateA.h"

void ConcreteStateB::handle(Context * context)
{
    cout << "ConcreteStateB handle()" << endl;
    context->state = unique_ptr<State>(new ConcreteStateA());
}
