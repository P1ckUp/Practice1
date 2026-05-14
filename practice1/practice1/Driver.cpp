/******************************************************************************/
/*!
\file   Driver.cpp
\author Matt Casanova 
\brief  
  This is the driver for Quiz1  
  
*/
/******************************************************************************/
#include <iostream>
#include "Quiz2.h"

void TestHelloWorld(void)
{
  Quiz2::HelloWorld(0);
  std::cout << std::endl;
  Quiz2::HelloWorld(5);
  std::cout << std::endl;
  Quiz2::HelloWorld(20);
  std::cout << std::endl;
  Quiz2::HelloWorld(1000);
  std::cout << std::endl;
  Quiz2::HelloWorld(-1);//Shouldn't print
  std::cout << std::endl;
}
void TestSwap(void)
{
  const int SIZE = 10;

  int arr1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int arr2[SIZE] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};

  for(int i = 0; i < SIZE; ++i)
  {
    std::cout << "x = " << arr1[i] << " y = " << arr2[i] << std::endl;
    Quiz2::Swap(arr1[i], arr2[i]);
    std::cout << "x = " << arr1[i] << " y = " << arr2[i] << std::endl << std::endl;
  }  

  
  
}
int main(void)
{
  TestHelloWorld();
  TestSwap();
  return 0;
}