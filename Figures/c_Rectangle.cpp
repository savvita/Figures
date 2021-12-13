#include "c_Rectangle.h"
#include<iostream>
using std::cout;

c_Rectangle::c_Rectangle()
{
	this->width = this->height = 0;
}

c_Rectangle::c_Rectangle(int width, int heigth)
{
	this->width = width;
	this->height = height;
}

void c_Rectangle::Show() const
{
	cout << "Rectangle: width = " << this->width << ", heigth = " << this->height << "\n";
}
