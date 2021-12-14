#include"Header.h"
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

void c_Square::show() const
{
	cout << "Square: side = " << this->side << "\n";
}

c_Rectangle c_Square::operator+(const c_Line& line) const
{
	return c_Rectangle(this->side + line.getLength(), this->side);
}

c_Rectangle c_Square::operator-(const c_Line& line) const
{
	if ((this->side - line.getLength()) > 0)
		return c_Rectangle((this->side - line.getLength()), this->side);
	return c_Rectangle();
}

