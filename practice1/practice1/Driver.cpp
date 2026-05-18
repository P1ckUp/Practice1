/******************************************************************************/
/*!
\file   Driver.cpp
\author Matt Casanova 
\brief  
  This is the driver for Quiz5
  
*/
/******************************************************************************/
#include <iostream>
#include "Quiz6.h"

// 1. 글로벌 함수로 오버로딩
// 2. 

int main(void)
{
  Quiz6::Vector2 first(1.0, 1.0);
  Quiz6::Vector2 second(2.0, 2.0);
  
  Quiz6::Vector2 result;
  
  const Quiz6::Vector2 const1(2.0, 2.0);
  const Quiz6::Vector2 const2(2.0, 2.0);

  //Test non const +
  std::cout << "Test Non Const +" << std::endl;
  result = first + second;
  std::cout << result << std::endl;
  
  //Test const +
  std::cout << "Test Const +" << std::endl;
  result = const1 + const2;
  std::cout << result << std::endl;
  
  //Test += 
  std::cout << "Test += with const" << std::endl;
  first += const1;
  std::cout << first << std::endl;
  
  //Test += Chain
  std::cout << "Test += Chain" << std::endl;
  first += second += const1;
  std::cout << first << std::endl;
  std::cout << second << std::endl;
  
  std::cout << "Test vector * float" << std::endl;
  result = const1 * 2.0;
  std::cout << result << std::endl;
  
  std::cout << "Test float * vector" << std::endl;
  result = 2.0 * const2;
  std::cout << result << std::endl;
  
  
  return 0;
}