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

void c_Circle::Show() const
{
	cout << "Circle: radius = " << this->radius << "\n";
}

c_SquareCircle c_Circle::operator+(const c_Square& square) const
{
	return c_SquareCircle(this->radius,square.getSide());
}

//void* c_Circle::operator+(const c_Square& square) const
//{
//	if (this->radius > square.getSide())
//	{
//		return new c_ChineseCoin(this->radius, square.getSide());
//	}
//
//	return new c_Washing(this->radius, square.getSide());
//}

//c_ChineseCoin c_Circle::operator+(const c_Square& square) const
//{
//	return c_ChineseCoin(this->radius, square.getSide());
//}
