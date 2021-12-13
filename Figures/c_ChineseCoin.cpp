#include"Header.h"
#include<iostream>
using std::cout;

//c_ChineseCoin::c_ChineseCoin(const c_Circle& circle, const c_Square& square)
//{
//	this->circle.setRadius(circle.getRadius());
//	this->square.setSide(square.getSide());
//}
//
//void c_ChineseCoin::Show() const
//{
//	cout << "Chinese coin:\n";
//	this->circle.Show();
//	this->square.Show();
//}

c_ChineseCoin::c_ChineseCoin()
{
	this->radius = this->side = 0;
}

c_ChineseCoin::c_ChineseCoin(int radius, int side)
{
	this->radius = radius;
	this->side = side;
}

void c_ChineseCoin::Show() const
{
	cout << "Chinese coin: radius = " << this->radius << ", side of the square = " << this->side << "\n";
}
