#ifndef _NONTERMINALEXPRESSION_H_
#define _NONTERMINALEXPRESSION_H_

#include "Context.h"
#include "AbstractExpression.h"

class NonterminalExpression : public AbstractExpression
{
private:
    AbstractExpression *abstractExpression;

public:
    NonterminalExpression(AbstractExpression *abstractExpression = nullptr) : abstractExpression(abstractExpression) {}
    ~NonterminalExpression() { if(abstractExpression != nullptr) delete abstractExpression; }

    void interpret(Context *context);
};

#endif /* _NONTERMINALEXPRESSION_H_ */
