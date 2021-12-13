#pragma once
#include"c_Circle.h"
#include"c_Square.h"

class c_ChineseCoin
{
private:
	c_Circle circle;
	c_Square square;

public:
	c_ChineseCoin(c_Circle& circle, c_Square& square);

	//gets
	inline c_Circle getCircle()const
	{
		return this->circle;
	}

	inline c_Square	getSquare()const
	{
		return this->square;
	}

	void Show() const;
};

