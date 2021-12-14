#include<iostream>
#include"Header.h"
using std::cout;

c_Washing::c_Washing()
{
	this->radius = this->side = 0;
}

c_Washing::c_Washing(int radius, int side)
{
	this->radius = radius;
	this->side = side;
}

void c_Washing::show() const
{
	cout << "Washing: radius = " << this->radius << ", side of the square = " << this->side << "\n";
}
