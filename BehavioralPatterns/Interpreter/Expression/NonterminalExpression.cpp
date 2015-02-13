#include <iostream>

#include "NonterminalExpression.h"

using namespace std;

void NonterminalExpression::interpret(Context *context)
{
    cout << "NonterminalExpression interpret() context = " << context->name << endl;
    if(abstractExpression != nullptr)
        abstractExpression->interpret(context);
}
