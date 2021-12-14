#pragma once
#include"Header.h"

class c_SquareCircle
{
private:
	int radius;
	int side;
	bool isChineseCoin;

public:
	c_SquareCircle();

	c_SquareCircle(int radius, int side);

	//gets
	inline int getRadius() const
	{
		return this->radius;
	}

	inline int getSide() const
	{
		return this->side;
	}

	inline bool getIsChineseCoin() const
	{
		return this->isChineseCoin;
	}

	//set
	inline void setRadius(int radius)
	{
		this->radius = radius;
	}

	inline void setSide(int side)
	{
		this->side = side;
	}

	void show() const;

};

