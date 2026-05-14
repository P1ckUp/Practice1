/******************************************************************************/
/*!
\file   Quiz3.h
\author Your Name
\brief  
  This is header file for Quiz1

-Put your prototypes in the header file.  No implementation here.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp
  
*/
/******************************************************************************/
#include "Quiz3.h"

namespace Quiz3
{
	void AddToFront(Node*& pList, int value)
	{
		Node* newNode = new Node;

		newNode->data = value;
		newNode->pNext = pList;

		pList = newNode;
	}


	//리스트를 처음부터 끝까지 탐색
	//value를 찾으면 해당 노드 주소 반환	
	//	없으면 nullptr 반환
	//for? while?
	const Node* FindNode(const Node* pList, int value)
	{

		while (pList != nullptr)
		{

			if(pList->data == value)
			{
				return pList;
			}
			pList = pList->pNext;
		}return nullptr;
	}


	void FreeList(Node* pList)
	{
		while (pList != nullptr)
		{
			Node* free_temp = pList->pNext;
			delete pList;
			pList = free_temp;
		}
		
	}

}
