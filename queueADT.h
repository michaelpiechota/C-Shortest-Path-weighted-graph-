//Michael Piechota 889378587 HW 12 Num 3
#ifndef H_queueADT
#define H_queueADT

template <class Type>
class queueADT
{
public:
    virtual bool isEmptyQueue() const = 0;

    virtual bool isFullQueue() const = 0;

    virtual void initializeQueue() = 0;

    virtual Type front() const = 0;

    virtual Type back() const = 0;

    virtual void addQueue(const Type& queueElement) = 0;

    virtual void deleteQueue() = 0;

};


#endif