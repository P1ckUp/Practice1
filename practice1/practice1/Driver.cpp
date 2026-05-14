/******************************************************************************/
/*!
\file   Driver.cpp
\author Matt Casanova 
\brief  
  This is the driver for Quiz3  
  
*/
/******************************************************************************/
#include <iostream>
#include <cstdlib>

#include "Quiz3.h"

static void PrintList(const Quiz3::Node* pList)
{
  while(pList)
  {
    std::cout << pList->data << " ";
    pList = pList->pNext;
  }
  std::cout << std::endl;
}

void TestList(int count)
{
  std::cout << "Test " << count << " Nodes *********************************\n";
  Quiz3::Node* pList = 0;
  
  PrintList(pList);
  
  for(int i = 0; i < count; ++i)
    Quiz3::AddToFront(pList, i);
    
  PrintList(pList);
  
  FreeList(pList);
  pList = 0;
  
}
void TestFind(int start, int end, int value)
{
  std::cout << "Test Finding " << value << "********************************\n";
  Quiz3::Node* pList = 0;
  
  for(int i = start; i < end; ++i)
    Quiz3::AddToFront(pList, i);
    
  const Quiz3::Node* pFind = Quiz3::FindNode(pList, value);
  
  if(pFind != 0)
    std::cout << value << " Found\n";
  else
    std::cout << value << " Not Found\n";
  
  FreeList(pList);
  pList = 0;
  
}
int main(void)
{
  TestList(2);
  TestList(10);
  TestList(1000);
  
  TestFind(0, 10, 0);
  TestFind(5, 1000, 999);
  TestFind(30, 40, 40);
  TestFind(0, 10000, 9845);
  TestFind(2000, 10000, 5);
  
  return 0;
}