/******************************************************************************/
/*!
\file   Driver.cpp
\author Matt Casanova 
\brief  
  This is the driver for Quiz1  
  
*/
/******************************************************************************/
#include <iostream>
#include <cstdlib>

#include "Quiz1.h"

static void PrintArray(const int* arr, int size)
{
  for(int i = 0; i < size; ++i)
    std::cout << arr[i] << " ";

  std::cout << std::endl << std::endl;
}
static void FillArray(int* arr, int size)
{
  const int MAX_VALUE = 100;
  for(int i = 0; i < size; ++i)
    arr[i] = std::rand() % MAX_VALUE;
}
void TestStrLen(void)
{
  char str1[5]     = "";
  char str2[5]     = "B";
  const char* str3 = "Batman";
  const char* str4 = 0; //This should not crash the program.
  
  std::cout << "Size of string 1: " << Quiz1::MyStrLen(str1) << std::endl;
  std::cout << "Size of string 2: " << Quiz1::MyStrLen(str2) << std::endl;
  std::cout << "Size of string 3: " << Quiz1::MyStrLen(str3) << std::endl;
  std::cout << "Size of string 4: " << Quiz1::MyStrLen(str4) << std::endl;
}
void TestAddArray(void)
{
  //Make three different sizes to test
  const int SIZE1 = 10;
  const int SIZE2 = 5;
  const int SIZE3 = 10000;
  
  //Fill the starting array with easy values to test.
  //All arrays are really the maximum size
  int arr1[SIZE3] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int arr2[SIZE3] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  const int arr3[SIZE2] = {1, 2, 3, 4, 5};
  const int arr4[SIZE2] = {1, 2, 3, 4, 5};
  int result[SIZE3];
  
  
  
  //Add the arrays and print
  Quiz1::AddArrays(arr1, arr2, result, SIZE1);
  PrintArray(result, SIZE1);
  
  //Fill the two arrays with random values for the second size
  FillArray(arr1, SIZE2);
  FillArray(arr2, SIZE2);
  //Add the arrays and print
  Quiz1::AddArrays(arr1, arr2, result, SIZE2);
  PrintArray(result, SIZE2);
  
  //Fill the Arrays with random values for the third size
  FillArray(arr1, SIZE3);
  FillArray(arr2, SIZE3);
  //Add the arrays and print
  Quiz1::AddArrays(arr1, arr2, result, SIZE3);
  PrintArray(result, SIZE3);

  //Test with null pointers and size of 0
  Quiz1::AddArrays(0, 0, 0, 0);//This should not crash
  
  Quiz1::AddArrays(arr3, arr4, result, SIZE2);
  PrintArray(result, SIZE2);
  
}
int main(void)
{
  TestStrLen();
  TestAddArray();
  return 0;
}