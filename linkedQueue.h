//Michael Piechota 889378587 HW 12 Num 3
#ifndef H_linkedQueue
#define H_linkedQueue
#include <iostream>
#include <cassert>
#include "queueADT.h"
using namespace std;

template <class Type>
class linkedQueueType: public queueADT<Type>
{
public:
    const linkedQueueType<Type>& operator=
                    (const linkedQueueType<Type>&);

    bool isEmptyQueue() const;

    bool isFullQueue() const;

    void initializeQueue();

    Type front() const;

    Type back() const;

    void addQueue(const Type& queueElement);

    void deleteQueue();

    linkedQueueType();


    linkedQueueType(const linkedQueueType<Type>& otherQueue);


    ~linkedQueueType();


private:
    nodeType<Type> *queueFront;
    nodeType<Type> *queueRear;
};

  template<class Type>
linkedQueueType<Type>::linkedQueueType()
{
    queueFront = NULL;
    queueRear = NULL;
}

template<class Type>
bool linkedQueueType<Type>::isEmptyQueue() const
{
    return(queueFront == NULL);
} //end

template<class Type>
bool linkedQueueType<Type>::isFullQueue() const
{
    return false;
}

template <class Type>
void linkedQueueType<Type>::initializeQueue()
{
    nodeType<Type> *temp;

    while (queueFront!= NULL)

    {
        temp = queueFront;

        queueFront = queueFront->link;

        delete temp;
    }

    queueRear = NULL;
}


template <class Type>
void linkedQueueType<Type>::addQueue(const Type& newElement)
{
    nodeType<Type> *newNode;

    newNode = new nodeType<Type>;

    newNode->info = newElement;
    newNode->link = NULL;

    if (queueFront == NULL)
    {
        queueFront = newNode;
        queueRear = newNode;
    }
    else
    {
        queueRear->link = newNode;
        queueRear = queueRear->link;
    }
}//end addQueue

template <class Type>
Type linkedQueueType<Type>::front() const
{
    assert(queueFront != NULL);
    return queueFront->info;
} //end front

template <class Type>
Type linkedQueueType<Type>::back() const
{
    assert(queueRear!= NULL);
    return queueRear->info;
} //end back

template <class Type>
void linkedQueueType<Type>::deleteQueue()
{
    nodeType<Type> *temp;

    if (!isEmptyQueue())
    {
        temp = queueFront;

        queueFront = queueFront->link;

        delete temp;

        if (queueFront == NULL)

            queueRear = NULL;
    }
    else
        cout << "Cannot remove from an empty queue" << endl;
}



template <class Type>
linkedQueueType<Type>::~linkedQueueType()
{

} //end destructor

template <class Type>
const linkedQueueType<Type>& linkedQueueType<Type>::operator=
                    (const linkedQueueType<Type>& otherQueue)
{


}


template <class Type>
linkedQueueType<Type>::linkedQueueType
                 (const linkedQueueType<Type>& otherQueue)
{

}

#endif
