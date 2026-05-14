/******************************************************************************/
/*!
\file   Quiz1.cpp
\author Your Name
\brief  
  This is cpp file for Quiz1 

-Put your prototypes in the header file.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp
  
*/
/******************************************************************************/
#include <string>
#include "Quiz1.h"

void Quiz1::AddArrays(const int arr1[], const int arr2[], int result[], int size)
{
		for (int i = 0; i < size; ++i)
		{
			result[i] = arr1[i] + arr2[i];
		}
};
//문자열 개수를 세서 개수를 
int Quiz1::MyStrLen(const char* str)
{	
	int i = 0;

	while(true)
	{
		if (str == nullptr)
		{
			return 0;
		}
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}

	return i;
};

//char str1[5] = "";
//char str2[5] = "B";
//const char* str3 = "Batman";
//const char* str4 = 0; //This should not crash the program.
// 
// 
//Put function bodies here.