#pragma once
#include"Header.h"

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

	//c_SquareCircle operator+(const c_Square& square) const;
};
