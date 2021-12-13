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

c_ChineseCoin c_Circle::operator+(const c_Square& square) const
{
	return c_ChineseCoin(this->radius, square.getSide());
}
