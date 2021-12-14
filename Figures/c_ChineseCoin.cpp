#include"Header.h"
#include<iostream>
using std::cout;

c_ChineseCoin::c_ChineseCoin()
{
	this->radius = this->side = 0;
}

c_ChineseCoin::c_ChineseCoin(int radius, int side)
{
	this->radius = radius;
	this->side = side;
}

void c_ChineseCoin::show() const
{
	cout << "Chinese coin: radius = " << this->radius << ", side of the square = " << this->side << "\n";
}
