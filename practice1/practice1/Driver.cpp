/******************************************************************************/
/*!
\file   Driver.cpp
\author Matt Casanova 
\brief  
  This is the driver for Quiz4 
  
*/
/******************************************************************************/
#include <iostream>
#include <cstdlib>

#include "Quiz4.h"



void TestList(int count)
{
  std::cout << "Test " << count << " Nodes *********************************";
  Quiz4::List list;
  
  std::cout << list << std::endl;
  
  for(int i = 0; i < count; ++i)
    list.AddToFront(i);
    
  std::cout << list << std::endl << std::endl;
   
}
void TestFind(int start, int end, int value)
{
  std::cout << "Test Finding " << value << "********************************\n";
  Quiz4::List list;
  
  for(int i = start; i < end; ++i)
    list.AddToFront(i);
    
  const Quiz4::List& listRef = const_cast<const Quiz4::List&>(list);

  const Quiz4::Node* pFind = listRef.FindNode(value);
  
  if(pFind != 0)
    std::cout << value << " Found\n";
  else
    std::cout << value << " Not Found\n";
  
}
int main(void)
{
  TestList(0);
  TestList(1);
  TestList(3);
  TestList(10);
  TestList(100);
  
  TestFind(1, 10, 1);
  TestFind(1, 10, 9);
  TestFind(1, 10, 0);
  TestFind(1, 10, 10);
  TestFind(1, 10, 5);
  TestFind(1, 10, 15);

  
  return 0;
}