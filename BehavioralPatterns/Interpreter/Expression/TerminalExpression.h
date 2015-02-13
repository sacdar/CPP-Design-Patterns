#ifndef _TERMINALEXPRESSION_H_
#define _TERMINALEXPRESSION_H_

#include "Context.h"
#include "AbstractExpression.h"

class TerminalExpression : public AbstractExpression
{
public:
    void interpret(Context *context);
};

#endif /* _TERMINALEXPRESSION_H_ */
