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

    void List::AddToFront(int i)
    {
        Node* newNode = new Node();

        newNode->data = i;
        newNode->pNext = m_pHead;

        m_pHead = newNode;
    }

    const Quiz4::Node* List::FindNode(int value) const
    {
        const Node* Head = m_pHead;
// m_pHead 직접 못움직임(const)
        while (Head != nullptr)
        {
            if (Head->data == value)
            {
                return Head;
            }
             Head = Head->pNext;
        }return nullptr;
    }

    List::List()
    {
        m_pHead = 0;
    }

    const Quiz4::Node* List::FindMax(void) const
    {
        Node* max_num;
        

        for (int i = 0; i < ; i++)
        {
            if( >)
        }

        return 0;
    }

    void List::SwapLists(List & rhs)
    {
        Node* dump_list;

        dump_list = m_pHead;
        m_pHead = rhs.m_pHead;
        rhs.m_pHead = dump_list;

    }

    int List::Count(void) const
    {

        return 0;
    }

    List::~List()
    {
        while (m_pHead != nullptr)
        {
            Node* free_temp = m_pHead->pNext;
            delete m_pHead;
            m_pHead = free_temp;
        }
    }
}

