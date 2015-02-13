#include <list>

#include "TerminalExpression.h"
#include "NonterminalExpression.h"

using namespace std;

int main(int argc, char *argv[])
{
    list<AbstractExpression*> list;
    Context *context = new Context("context");

    list.push_back(new TerminalExpression());
    list.push_back(new NonterminalExpression(new TerminalExpression()));

    for(auto &expr : list) {
        expr->interpret(context);
        delete expr;
    }

    delete context;

    return 0;
}
