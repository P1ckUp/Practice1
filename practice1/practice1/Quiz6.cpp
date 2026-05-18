/******************************************************************************/
/*!
\file   Quiz6.h
\author Your Name
\brief  
  This is header file for Quiz6

-Put your prototypes in the header file.  No implementation here.
-Put your function bodies in the cpp.
-You cannot include any more header files in the .h or .cpp
*/
/******************************************************************************/
#include "Quiz6.h"

namespace Quiz6
{
	//DO NOT WRITE THIS FUNCTION
	std::ostream& operator<<(std::ostream& os, const Vector2& rhs)
	{
		os << rhs.m_x << ", " << rhs.m_y;
		return os;
	}

	//Student Code goes here!!!!!
	Vector2::Vector2(double x, double y)
		: m_x(x), m_y(y)
	{
	
	}

	// Vector2 operator+(const Vector2 & other) const;
	Vector2& Vector2::operator+(const Vector2& other)const
	{
		double NewX = m_x + other.m_x;
		double NewY = m_y + other.m_y;

		Vector2 Result(NewX, NewY);

		return Result;
	}

	Vector2& operator*(double cost, const Vector2& vec1)
	{
		double NewX = cost * vec1.m_x;
		double NewY = cost * vec1.m_y;

		Vector2 Result(NewX, NewY);

		return Result;
	}

	//friend <- private 이용 허가증 == friend랑 Vector2:: 필요 X
	Vector2& Vector2::operator*(double cost) const
	{
		double NewX = m_x * cost;
		double NewY = m_y * cost;

		Vector2 Result(NewX, NewY);

		return Result;
	}

	Vector2& Vector2::operator+=(const Vector2& other)
	{
		double NewX = m_x += other.m_x;
		double NewY = m_y += other.m_y;

		return *this; // this <<- 자신이 바뀜
	}



}