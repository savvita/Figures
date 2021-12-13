#include "c_Line.h"
#include<iostream>
using std::cout;

c_Line::c_Line()
{
	this->length = 0;
}

c_Line::c_Line(int length)
{
	this->length = length;
}

void c_Line::Show() const
{
	cout << "Line: length = " << length << "\n";
}