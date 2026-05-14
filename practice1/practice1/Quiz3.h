/******************************************************************************/
/*!
\file   Quiz3.h
\author Your Name
\par    email: your\@email.com
\par    CS170
\par    Quiz3
\date   27/3/2014
\brief  
  This is header file for Quiz3

-Put your prototypes in the header file.  No implementation here.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp
-Do not submit the Driver.cpp file.  Only Quiz3.h and Quiz3.cpp
-Put Quiz3.h and Quiz3.cpp in a zip file called CS170_your.login_Quiz3.zip

Compile with:
bcc32 -w -v -vG Driver.cpp Quiz3.cpp

  
*/
/******************************************************************************/
namespace Quiz3
{

  //Simple singly linked list
  struct Node
  {
    int data;
    Node* pNext;
  };

  /*Write a function that will dynamically add a value to the front of the 
  list*/
  void AddToFront(Node*& pList, int value);
  
  /*Write a function to find a specific value in a linked list.  Return
  the pointer to the node with the first value.  Return null if it isn't found.
 */
  const Node* FindNode(const Node* pList, int value);
  
  /*Write a function that will free all nodes in the list.*/
  void FreeList(Node* pList);
  
}
