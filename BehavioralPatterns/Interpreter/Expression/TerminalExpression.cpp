#include <iostream>

#include "TerminalExpression.h"

using namespace std;

void TerminalExpression::interpret(Context *context)
{
    cout << "TerminalExpression interpret() context = " << context->name << endl;
}
