#ifndef _ABSTRACTCLASS_H_
#define _ABSTRACTCLASS_H_

class AbstractClass
{
public:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;

    void TemplateMethod();
};

#endif /* _ABSTRACTCLASS_H_ */
