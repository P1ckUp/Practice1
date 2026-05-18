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
#include <iostream>
namespace Quiz6
{ 
class Vector2
{
public:
    Vector2(double x = 0.0, double y = 0.0);//Initializes the Vector.
    //Class Method operator+  Add two vectors and create a third. vec3=vec1+vec2;
    Vector2& operator+(const Vector2& other) const;
    //Class Method operator* to scale this vector by a float vec2=vec1*2.5;
    Vector2& operator*(double cost) const;
    //Non class method operator* to scale this vector by a float vec2=2.5*vec1;
    friend Vector2& operator*(double cost, const Vector2& vec1);
  
    //Class Method operator+= to Add a vector to this one vec1+=vec2;
    Vector2& operator+=(const Vector2& other); //자기 자신을 직접 수정해서 마지막에 const를 붙이면 안됨.
  
  
    //DO NOT WRITE THIS FUNCTION
    friend std::ostream& operator<<(std::ostream& os, const Vector2& rhs); 
private:
    double m_x;
    double m_y;
           
};
}

