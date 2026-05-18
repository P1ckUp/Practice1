/******************************************************************************/
/*!
\file   Quiz4.h
\author Your Name
\brief  
  This is header file for Quiz4

-Put your prototypes in the header file.  No implementation here.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp

*/
/******************************************************************************/
#include "Quiz4.h"

namespace Quiz4
{
    std::ostream& operator<<(std::ostream& os, const List& list)
    {
        const Node* pCurr = list.m_pHead;
        while (pCurr)
        {
            std::cout << pCurr->data << " ";
            pCurr = pCurr->pNext;
        }

        return os;
    }
    void List::AddToFront(int count)
    {
        Node* newNode = new Node();
        newNode->data = count;
        newNode->pNext = m_pHead;
        m_pHead = newNode;
    }
    const Node* List::FindNode(int value) const
    {
        const Node* cost = m_pHead;
        while (cost != 0)
        {
            if (cost->data == value)
            {
                return cost;
            }
            cost = cost->pNext;
        }

        return 0;
    }

    List::List()
    {
        m_pHead = 0;
    }

    List::~List()
    {
        while (m_pHead != nullptr)
        {
            Node* freetemp = m_pHead->pNext;
            delete m_pHead;
            m_pHead = freetemp;
        }
    }

}

