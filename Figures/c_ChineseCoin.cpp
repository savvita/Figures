#include "c_ChineseCoin.h"

#include<iostream>
using std::cout;

c_ChineseCoin::c_ChineseCoin(c_Circle& circle, c_Square& square)
{
	this->circle.setRadius(circle.getRadius());
	this->square.setSide(square.getSide());
}

void c_ChineseCoin::Show() const
{
	cout << "Chinese coin:\n";
	this->circle.Show();
	this->square.Show();
}
