#include<iostream>
#include"Header.h"
using std::cout;

//
//c_Washing::c_Washing(c_Circle& circle, c_Square& square)
//{
//	this->circle.setRadius(circle.getRadius());
//	this->square.setSide(square.getSide());
//}
//
//void c_Washing::Show() const
//{
//	cout << "Chinese coin:\n";
//	this->square.Show();
//	this->circle.Show();
//}

c_Washing::c_Washing()
{
	this->radius = this->side = 0;
}

c_Washing::c_Washing(int radius, int side)
{
	this->radius = radius;
	this->side = side;
}

void c_Washing::Show() const
{
	cout << "Washing: radius = " << this->radius << ", side of the square = " << this->side << "\n";
}
