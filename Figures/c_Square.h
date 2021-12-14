#pragma once
#include"Header.h"

class c_Square
{
private:
	int side;

public:
	c_Square();
	explicit c_Square(int side);

	//gets
	inline int getSide()const
	{
		return this->side;
	}

	//sets
	inline void setSide(int side)
	{
		this->side = side;
	}

	void show() const;

	//operators
	c_Rectangle operator+(const c_Line& line) const;

	c_Rectangle operator-(const c_Line& line) const;
};