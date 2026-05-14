/******************************************************************************/
/*!
\file   Quiz5.h
\author Your Name
\brief  
  This is header file for Quiz5

-Put your prototypes in the header file.  No implementation here.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp

  
*/
/******************************************************************************/
#include <iostream>
namespace Quiz5
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
    //Do NOT WRITE THIS FUNCTION
    List(void);//Initializes the list.
    ~List(void);//Deletes all nodes in the list
    void AddToFront(int value);//dynamically add a value to the front of the list
    friend std::ostream& operator<<(std::ostream& os, const List& list);//Prints a list
	const Node* FindNode(int value) const;
    
    //WRITE THESE FUNCTIONS, Do not Call Any other functions
    
    //Find the largest value in the.  Return the pointer to the node or null if the
    //list is empty.
    const Node* FindMax(void) const;
    //Swaps the entire list so that this list has the nodes and size of rhs, and 
    //rhs has the nodes and size of this list
    void SwapLists(List& rhs);
    //Returns the number of nodes in the list.
    int Count(void) const;
  private:
    Node* m_pHead;  
  };
}
