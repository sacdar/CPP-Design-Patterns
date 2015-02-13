#ifndef _ABSTRACTEXPRESSION_H_
#define _ABSTRACTEXPRESSION_H_

class AbstractExpression
{
public:
    virtual void interpret(Context *context) = 0;
};

#endif /* _ABSTRACTEXPRESSION_H_ */
