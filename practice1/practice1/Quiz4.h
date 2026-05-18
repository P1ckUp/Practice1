/******************************************************************************/
/*!
\file   Quiz4.h
\author Your Name
\brief  
  This is header file for Quiz4

-Put your prototypes in the header file.  No implementation here.
-You Cannot Add or change anything in the .h File.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp
  
*/
/******************************************************************************/
#include <iostream>
namespace Quiz4
{
 
  //Simple singly linked list
  struct Node
  {
    int data;
    Node* pNext;
  };
  
  class List
  {
  public:
    //constructor
      List();

    //destructor
      ~List();
    //dynamically add a value to the front of the list
      
    //find a specific value in a linked list.  Return the pointer to the node 
    //with the first value.  Return null if it isn't found. 
        void AddToFront(int count);
        const Quiz4::Node* FindNode(int value) const;
    
    //Do NOT WRITE THIS FUNCTION
    friend std::ostream& operator<<(std::ostream& os, const List& list);
    
  private:
    Node* m_pHead;  
  };
}
