#include<iostream>
#include"Header.h"
using std::cout;

c_SquareCircle::c_SquareCircle()
{
	this->radius = this->side = 0;
	this->isChineseCoin = false;
}

c_SquareCircle::c_SquareCircle(int radius, int side)
{
	this->radius = radius;
	this->side = side;

	if (radius > side)
		this->isChineseCoin = true;
	else
		this->isChineseCoin = false;
}

void c_SquareCircle::show() const
{
	if(this->isChineseCoin)
	{
		cout << "Chinese Coin: ";
	}
	else
	{
		cout << "Washing: ";
	}
	cout<< "radius = " << this->radius << ", side of the square = " << this->side << "\n";
}
