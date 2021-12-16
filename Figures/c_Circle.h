#pragma once
#include"Header.h"
#include<iostream>

class c_Circle
{
private:
	int radius;

public:
	c_Circle();
	explicit c_Circle(int radius);

	//gets
	inline int getRadius()const
	{
		return this->radius;
	}

	//sets
	inline void setRadius(int radius)
	{
		this->radius = radius;
	}

	void show() const;

	//operators
	c_ChineseCoin operator+(const c_Square& square) const;

	c_Washing operator+(const c_Square* square) const;

	friend std::ostream& operator<<(std::ostream& out, const c_Circle& circle);

	friend std::istream& operator>>(std::istream& in, c_Circle& circle);

	//c_SquareCircle operator+(const c_Square& square) const;
};
