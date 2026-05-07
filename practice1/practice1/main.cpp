#include<iostream>
#include<string>

int main(int agrc, char** argv)
{
	// 이름을 저장하기 위한 c++ 변수 자료형 = std::string
	std::string name = "이동훈";
	std::string english_name = "Lee Dong Hoon";

	std::cout << "영문: " << english_name << std::endl;
	std::cout << "한글: " << name << std::endl;
}