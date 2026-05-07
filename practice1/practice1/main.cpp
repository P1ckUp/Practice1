#include<iostream>
#include<string>
/*
int main(int agrc, char** argv)
{
	
	// 이름을 저장하기 위한 c++ 변수 자료형 = std::string
	// concatination = std::string + std::string
	// concat => 새로운 문자열 = 문자열1 + 문자열2
	// copy => 새로운 문자열1 = 오래된 문자열2
	// compare => if(문자열1 == 문자열2)

	std::string firstname = "DongHun";
	std::string lastname = "Lee";

	std::string fullname = firstname + " " + lastname;

	std::cout << "English Name: " << fullname << std::endl;
	*/
// =======================================================
/*
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	std::cout<<"before swap: a = "<<a<<", b = "<<b<<std::endl;
}
*/
int main()
{
	int age = 10;

	int& ref = age;

	ref = 20;

	std::cout << "age: " << age << std::endl;

	return 0;
}