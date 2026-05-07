#include<iostream>

int main(int agrc, char** argv)
{

//	printf("Hello, World!\n"); // C-style output

	std::cout << "당신의 나이는 몇 살인가요? "; // C++-style output

	int age = 0;

	std::cin >> age; // C++-style input, more type-safe and extensible
	
	std::cout << "당신의 나이는 " << age << "살입니다." << std::endl; // C++-style output, more type-safe and extensible

	return 0;
}