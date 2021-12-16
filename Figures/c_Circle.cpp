#include"Header.h"
#include<iostream>

using std::cout;

c_Circle::c_Circle()
{
	this->radius = 0;
}

c_Circle::c_Circle(int radius)
{
	this->radius = radius;
}

void c_Circle::show() const
{
	cout << "Circle: radius = " << this->radius << "\n";
}

//c_SquareCircle c_Circle::operator+(const c_Square& square) const
//{
//	return c_SquareCircle(this->radius,square.getSide());
//}

c_ChineseCoin c_Circle::operator+(const c_Square& square) const
{
	return c_ChineseCoin(this->radius, square.getSide());
}

c_Washing c_Circle::operator+(const c_Square* square) const
{
	return c_Washing(this->radius, square->getSide());
}

std::ostream& operator<<(std::ostream& out, const c_Circle& circle) 
{
	out << "Circle: radius = " << circle.radius << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, c_Circle& circle)
{
	in >> circle.radius;
	return in;
}
