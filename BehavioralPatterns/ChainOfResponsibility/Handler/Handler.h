#ifndef _HANDLER_H_
#define _HANDLER_H_

class Handler
{
protected:
    Handler *successor;

public:
    Handler() : successor(nullptr) {}

    void setSuccessor(Handler *successor);

    virtual void handleRequest(int request) = 0;
};

#endif /* _HANDLER_H_ */
