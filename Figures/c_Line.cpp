#include<iostream>
#include"Header.h"
using std::cout;

c_Line::c_Line()
{
	this->length = 0;
}

c_Line::c_Line(int length)
{
	this->length = length;
}

void c_Line::show() const
{
	cout << "Line: length = " << length << "\n";
}