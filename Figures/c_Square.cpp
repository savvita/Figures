#include "c_Square.h"
#include<iostream>
using std::cout;

c_Square::c_Square()
{
	this->side = 0;
}

c_Square::c_Square(int side)
{
	this->side = side;
}

void c_Square::Show() const
{
	cout << "Square: side = " << this->side << "\n";
}

c_Rectangle c_Square::operator+(const c_Line& line) const
{
	return c_Rectangle(this->side + line.getLength(), this->side);
}

