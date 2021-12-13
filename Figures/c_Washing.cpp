#include "c_Washing.h"
#include<iostream>
using std::cout;


c_Washing::c_Washing(c_Circle& circle, c_Square& square)
{
	this->circle.setRadius(circle.getRadius());
	this->square.setSide(square.getSide());
}

void c_Washing::Show() const
{
	cout << "Chinese coin:\n";
	this->square.Show();
	this->circle.Show();
}

