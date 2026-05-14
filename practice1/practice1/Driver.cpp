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

    for (int i = start; i < end; ++i)
        list.AddToFront(i);

    const Quiz4::List& listRef = const_cast<const Quiz4::List&>(list);

    const Quiz4::Node* pFind = listRef.FindNode(value);

    if (pFind != 0)
        std::cout << value << " Found\n";
    else
        std::cout << value << " Not Found\n";
}
  void TestSwap(void)
  {
      Quiz4::List list_x;
      Quiz4::List list_y;

      for (int i = 0; i < 10; ++i)
      {
          list_x.AddToFront(i + 1);
          list_y.AddToFront(i + 10);
      }

          std::cout << std::endl;
          std::cout << "x: " << list_x << "\ny: " << list_y << std::endl;
          std::cout << std::endl;
          list_x.SwapLists(list_y);
          std::cout << "x: " << list_x << "\ny: " << list_y << std::endl;
      }

  void TestMax(int nums)
  {
      Quiz4::List list;

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

  TestSwap();

  TestMax(100);

  return 0;
}