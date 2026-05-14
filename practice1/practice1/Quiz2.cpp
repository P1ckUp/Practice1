/******************************************************************************/
/*!
\file   Quiz2.cpp
\author Your Name
\brief  
  This is cpp file for Quiz2 

-Put your prototypes in the header file.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp

*/
/******************************************************************************/
#include "Quiz2.h"
#include <iostream> /*cout*/

void Quiz2::HelloWorld(int size)
{
	if (size <= 0)
	{
		return ;
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Hello, World" << std::endl;
	}
}

void Quiz2::Swap(int& arr1, int& arr2)
{
	int swap_arr;

	swap_arr = arr1;
	arr1 = arr2;

	arr2 = swap_arr;
}
