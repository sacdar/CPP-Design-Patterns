#ifndef _ITERATOR_H_
#define _ITERATOR_H_

class Iterator
{
public:
    virtual void* first() = 0;
    virtual void* next() = 0;
    virtual bool isDone() = 0;
    virtual void* currentItem() = 0;
};

#endif /* _ITERATOR_H_ */
