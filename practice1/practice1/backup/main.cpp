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
/*
#include<cstdio>
#include<iostream>
int main()
{
	int a = 0;
	int max = 0;

	while (true)
	{
		std::cout << "enter the value: ";
		std::cin >> a;
		if (a == 0)
		{
			std::cout << "program is finished." << std::endl;
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
*/

//컴파일 될 수 있도록 코드를 작성 및 수정
//성공적으로 프린트(45가 나와야됨)
/*
#include<cstdio>
#include<iostream>

int accumulate(int arr[], int size)
{
	int Sum = 0;

	for (int i = 0; i < size; ++i)
	{
		Sum += arr[i];
	}
	return Sum;
}

float accumulate(float arr[], int size)
{
	float Sum = 0.00f;

	for (int i = 0; i < size; ++i)
	{
		Sum += arr[i];
	}
	return Sum;
}


int main(void)


{
	const int size = 9;
	int iNums[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	float fNums[size] = {};

	for (int i = 0; i < size; ++i)
	{
		fNums[i] = iNums[i] + 0.1f * (float)(i + 1);
	}

	// Todo1: accumulate 함수 구현
	int iSum = accumulate(iNums, size);
	float fSum = accumulate(fNums, size);

	// Todo2: 출력 iSum, fSum

	std::cout << "iSum: " << iSum << std::endl;
	std::cout << "fSum: " << fSum << std::endl;

	return 0;
}
*/
/*
k가 들어간 수 출력하기
사용자에게 maxNum과 k를 입력 받습니다.

조건
maxNum은 0보다 크다.
k는 0~9 한자리 수.

1 이상 maxNum 이하 수 중에서 k가 들어간 수는 모두 출력하기
ex) maxNum = 15, k = 5 일 때 출력 5 15
*/

/*
#include<iostream>

bool HasDigit(int num, int k)
{
	int l;

	while (num > 0)
	{
		l = num % 10;

		if (l == k)
		{
			return true;
		}
			num = num / 10;
	}
	return false;
}

int main(void)
{
	int maxNum = 0;
	int k = 0;
	int num;

	while (maxNum <= 0)
	{
		std::cout << "maxNum을 입력하세요\n";
		std::cin >> maxNum;
		if (maxNum <= 0)
		{
			std::cout << "값이 잘못되었습니다. 다시 입력하세요.\n";
		}
	}

	do
	{
		std::cout << "k를 입력하세요\n";
		std::cin >> k;
		
		if (k >= 10 || k < 0)
		{
			std::cout << "값이 잘못되었습니다. 다시 입력하세요.\n";
		}
	} while (k >= 10 || k < 0);

	std::cout << maxNum << " " << k << "\n";

	for (int num = 0; num <= maxNum; num++)
	{
		if (HasDigit(num, k))
			std::cout << num << "\n";
	}

	return 0;
}
*/

/*
구구단 출력

사용자에게 구구단 몇 단까지 출력 할 것인지 입력 받고 구구단 출력하기.

ex) 사용자 입력 값 = 7,
1 7 14 21 28 35 42 49 56 63

ex) 사용자 입력 값 = 11,
1 11 22 33 44 55 66 77 88 99
*/

/*
#include<iostream>
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	std::cout << "출력할 구구단의 단을 입력하세요.\n";
	std::cin >> i;

	for(j = 1; j <= 9; ++j)
	{
		k = j * i;
		std::cout << " \n" << k;
	}

	return 0;
}
//구구단 구하는법: 짝수 홀수 가르기. >> 정수 % 2 == 0;
*/


/*
숫자 맞추기 게임
프로그램이 시작하면 랜덤으로 숫자를 하나 정한다.
사용자가 그 수를 맞추는 게임.
*/
//(rand / srand) C 스타일 <stdlib.h> 사용, c++에선 #include <random> 사용
//	srand(time(NULL)); //현재 시간을 기준으로 랜덤 시작점 설정

/*
#include<iostream>
#include<stdlib.h>

int main(void)
{

	
	int i = rand() % 100;
	int k = 0;

	do
	{
		std::cout << "0에서 100 사이 정답을 찾으시오.\n";
		std::cin >> k;

		if(k > 99 || k < 0)
		{
			std::cout << "잘못된 값입니다. 다시 입력하세요.\n";
		}
	} while (k > 99 || k < 0);

	while (k != i)
	{
		if (k > i)
		{
			std::cout << "k는 i보다 큽니다. 다시 입력해주세요.\n";
			std::cin >> k;

		}			
		else if (k < i)
		{
				std::cout << "k는 i보다 작습니다. 다시 입력해주세요.\n";
				std::cin >> k;
		}
		else
		{
			std::cout << "정답입니다.\n";
		}
	}

	return 0;
}

*/

//틱택토 게임

//#include <iostream>
//
//void printBoard(char board[])
//{
//	for (int i = 0; i < 9; ++i)
//	{
//		if (i / 3 == 0)
//			std::cout << std::endl;
//		std::cout << board[i];
//	}
//
//	//for (int row = 0; row < 3; ++row)
//	//{
//	//    std::cout << "|";
//	//    for (int col = 0; col < 3; ++col)
//	//    {
//	//        int index = 0; // Todo
//	//        std::cout << board[index] << "|";
//	//    }
//	//    std::cout << std::endl;
//	//}
////}
//
//
//int main(void)
//{
//	char playerA = 'O';
//	char playerB = 'X';
//
//	char board[9] = {};
//	for (int i = 0; i < 9; ++i)
//	{
//		board[i] = ' ';
//	}
//	printBoard(board);
//
//	bool isPlayerATurn = true;
//
//	std::cout << playerA << "'s Turn!!\n";
//	if (isPlayerATurn)
//	{
//		std::cout << "Pick the row!\n";
//	}
//	int pickedRow = -1;
//	std::cin >> pickedRow;
//
//	if (isPlayerATurn)
//	{
//		std::cout << "Pick the column!\n";
//	}
//	int pickedCol = -1;
//	std::cin >> pickedCol;
//
//	// Todo2 check the boundary (0~2, 0~2)
//
//	board[pickedRow] = playerA;
//
//	printBoard(board);
//}

/*
#include <iostream>

bool WinnerCheck(char Board[3][3], char p)
{
	return
		(Board[0][0] == p && Board[0][1] == p && Board[0][2] == p) ||
		(Board[1][0] == p && Board[1][1] == p && Board[1][2] == p) ||
		(Board[2][0] == p && Board[2][1] == p && Board[2][2] == p) ||
		(Board[0][0] == p && Board[1][1] == p && Board[2][2] == p) ||
		(Board[2][0] == p && Board[1][1] == p && Board[0][2] == p) ||
		(Board[0][0] == p && Board[1][0] == p && Board[2][0] == p) ||
		(Board[0][1] == p && Board[1][1] == p && Board[2][1] == p) ||
		(Board[0][2] == p && Board[1][2] == p && Board[2][2] == p);
}

bool DrawCheck(char Board[3][3])
{
	for (int col = 0; col < 3; ++col)
	{
		for (int row = 0; row < 3; ++row)
		{
			if (Board[col][row] == ' ')
			return false;
		}
	} 
	return true;
}


void PrintBoard(char Board[3][3])
{
	for (int col = 0; col < 3; ++col)
	{
		for (int row = 0; row < 3; ++row)
		{
			std::cout << Board[col][row] << " | ";
		} 
		std::cout << std::endl;
	}
}


void GetUserInput(int& col, int& row)
{
	do
	{
		
		std::cout << "col 입력하세요.\n";
		std::cin >> col;

		std::cout << "row 입력하세요.\n";
		std::cin >> row;
		if((row > 2 || row < 0) || (col > 2 || col < 0))
		{
			std::cout << "Wrong location. Please do again.\n";
		}
	} while ((row > 2 || row < 0) || (col > 2 || col < 0));

}
//❌ PrintBoard가 보드를 만들면 안 됨
//❌ PrintBoard가 값을 바꾸면 안 됨

int main(void)
{
	char PlayerA = 'O';
	char PlayerB = 'X';

	char Board[3][3];

	for (int col = 0; col < 3; ++col)
	{
		for (int row = 0; row < 3; ++row)
		{
			Board[col][row] = ' ';
		}
		std::cout << std::endl;
	}

	PrintBoard(Board);

	int row = 0;
	int col = 0;

	bool IsPlayerATurn = true;


		while (true)
		{
			if (IsPlayerATurn)
			{
				std::cout << "A's Turn. choice the location (0~2)\n";
			}
			else
			{
				std::cout << "B's Turn. choice the location (0~2)\n";
			}
			//std::cin >> row;
			//std::cin >> col;
			//while ((row > 2 || row < 0) || (col > 2 || col < 0))
			//{
			//	std::cout << "Wrong location. Please do again";
			//}

			GetUserInput(row, col);

			if (IsPlayerATurn)
			{
				if (Board[col][row] != ' ')
				{
					std::cout << "This location is already used. Please do again\n";
				}
				else
					Board[col][row] = 'O';
				PrintBoard(Board);
				if (WinnerCheck(Board, 'O'))
				{
					std::cout << "A is winner.\n";
					break;
				}
				if(DrawCheck(Board))
				{
					std::cout << "Game is Draw\n";
					break;
				}
			}
			

			else
			{
				if (Board[col][row] != ' ')
				{
					std::cout << "This location is already used. Please do again\n";
				}
				else
					Board[col][row] = 'X';
				PrintBoard(Board);
				if (WinnerCheck(Board, 'X'))
				{
					std::cout << "B is winner.\n";
					break;
				}
				if (DrawCheck(Board))
				{
					std::cout << "Game is Draw\n";
					break;
				}
			}
			IsPlayerATurn = !IsPlayerATurn;
		}
	

}
*/

/*
#include <fstream>

int main(void)
{
	std::fstream fs;

	fs.open("yourname.txt");

	if (fs.is_open())
	{

	}

}
*/

//string 관련 :
//string에 중복된 alphabet 있는지 체크 O
//string에서 앞뒤로 space 없애기 X
//string 단어 갯수 세기 X
//파일 경로, 확장명 파싱 X

#include <iostream>
#include <string>

struct TestCase {
	std::string input;
	bool expected;
};

bool hasDuplicate(std::string str)
{
	for (int i = 0; i < str.length(); ++i) // 문자열의 첫 문자부터 검사를 시작하는 루프
	{

	}
	return false;
}

int main() {
	TestCase tests[20] = {
		{"abc", false},
		{"hello", true},
		{"abcdefga", true},
		{"", false},
		{"a", false},
		{"aa", true},
		{"Aa", false},
		{"abcdefghijklmnopqrstuvwxyz", false},
		{"abcdefghijklmnopqrstuvwxyza", true},
		{"apple", true},
		{"busan", false},
		{"programming", true},
		{"112233", true},
		{"a1b2c3", false},
		{"a b c", true},
		{"!@#$%^", false},
		{"abcABC", false},
		{"abcdea", true},
		{"zxywvutsrqponmlkjihgfedcba", false},
		{"kkkkkkkk", true}
	};


	int passTest = 0;

	for (int i = 0; i < 20; ++i)
	{
		TestCase& t = tests[i];
		bool result = hasDuplicate(t.input);

			if (result == t.expected)
			{
				passTest++;
			}
		std::cout << "Input: " << t.input
			<< " | Expected: " << t.expected
			<< " | Result: " << result
			<< (result == t.expected ? " [PASS]" : " [FAIL]")
			<< std::endl;
	}

	std::cout << "Test Result: " << passTest << "/" << 20 << std::endl;
}

//#include <iostream>
//#include <string>
//#include <cctype>
//
//struct TestCase {
//	std::string input;
//	std::string expected;
//};
//
//std::string trim(const std::string& str)	//trim: 문자열의 앞과 뒤의 공백을 제거하는 함수
//{
//	//isspace 사용
//	size_t start = 0;
//	size_t end = str.length() - 1;	//문자열의 맨 뒤에서부터 해야되기 때문에 문자열의 -1 자리 ( 맨뒤)에서 부터 시작
//	
//	if (str.empty())	//만약 값이 존재않는 0일때(공백) pass
//	return "";
//	
//	//반복문으로 공백 체크
//	while (start < str.length() && isspace((unsigned char)str[start])) 
//	{
//		start++;
//	}
//
//	while (end > start && isspace((unsigned char)str[end]))
//	{
//		end--;
//	}
//
//	if (start == str.length())
//		return "";
//
//	return str.substr(start, end - start + 1);
//}
//
//
//int main() {
//	TestCase tests[] = {
//		// 기본 케이스
//		{"hello", "hello"},
//		{" hello", "hello"},
//		{"hello ", "hello"},
//		{" hello ", "hello"},
//
//		// 공백 여러 개
//		{"   hello", "hello"},
//		{"hello   ", "hello"},
//		{"   hello   ", "hello"},
//
//		// 문자열 사이 공백은 유지
//		{"hello world", "hello world"},
//		{"   hello world   ", "hello world"},
//
//		// 빈 문자열
//		{"", ""},
//
//		// 공백만 있는 경우
//		{" ", ""},
//		{"     ", ""},
//
//		// 탭 포함
//		{"\thello", "hello"},
//		{"hello\t", "hello"},
//		{"\t hello \t", "hello"},
//
//		// 개행 포함
//		{"\nhello", "hello"},
//		{"hello\n", "hello"},
//		{"\n hello \n", "hello"},
//
//		// 여러 종류 whitespace 혼합
//		{" \t\n hello world \n\t ", "hello world"},
//
//		// 특수문자
//		{"   !@#hello$$$   ", "!@#hello$$$"},
//
//		// 한 글자
//		{" a ", "a"},
//
//		// 내부 whitespace 유지 확인
//		{"   a   b   c   ", "a   b   c"}
//	};
//
//	const int numTests = 22;
//
//	int passTest = 0;
//
//	for (int i = 0; i < numTests; ++i)
//	{
//		TestCase& t = tests[i];
//		std::string result = trim(t.input);
//
//		if (result == t.expected)
//		{
//			passTest++;
//		}
//
//		std::cout << "Input: " << t.input
//			<< " | Expected: " << t.expected
//			<< " | Result: " << result
//			<< (result == t.expected ? " [PASS]" : " [FAIL]")
//			<< std::endl;
//	}
//
//	std::cout << "Test Result: " << passTest << "/" << numTests << std::endl;
//}