#pragma once

class MyString
{
public:
	//1. 생성자(Constructor)는 Return Type이 없는 특별한 함수.
	//2. 생성자(이름)은 Class의 이름과 같아야 된다.
	//3. Class를 생성할 때 항상 한번 불린다.
	//4. 어떤 생성자 함수가 불리는지는 Parameter가 뭐가 들어오냐에 따라 다름.
	MyString(void);

	//1. 소멸자(Destructor) Return Type이 없는 특별한 함수.
	//2. Class 이름이랑 같음.
	//3. Class가 소멸될때 자동으로 불림.
	//4. Overloading이 안됨.

	~MyString(void);

	MyString(const char* str);

private:


};