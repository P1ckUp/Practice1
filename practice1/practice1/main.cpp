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
#include<iostream>
#include<string>
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
/*
int main()
{
	int age = 10;

	int& ref = age;

	ref = 20;

	std::cout << "age: " << age << std::endl;

	return 0;
}
*/
//사용자로부터 0보다 큰 정수들의 목록을 입력받는 프로그램을 작성하시오.
//사용자가 종료를 의미하는 값인 0을 입력할 때까지 계속 입력받는다.
//종료 값(sentinel)인 0이 입력되면, 프로그램은 입력된 값들 중에서 가장 큰 값을 출력해야 한다.
#include<cstdio>
#include<iostream>
int main()
{
	int a = 0;
	int max = 0;

	while (true)
	{
		std::cout << "값을 입력하세요.: ";
		std::cin >> a;
		if (a == 0)
		{
			break;
		}
		else if (a > max)
		{
			max = a;
		}
		std::cout << "biggest value is: " << max<<std::endl;
	}return 0;

return 0;
}









