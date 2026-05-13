#include <iostream>
#include "MyString.h"

MyString::MyString(void)
{

}

MyString::MyString(const char* str)
{
	int count = 0;
	while (*str)
	{
		++count;
		++str;
	}
	//동적할당은 항상 수동으로 해제 해줘야된다.
	data = new char[count + 1] {};
	size = count;
}

MyString::~MyString(void)
{

}