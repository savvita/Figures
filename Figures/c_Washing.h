#pragma once
#include"Header.h"

class c_Washing
{
private:
	int radius;
	int side;

public:
	c_Washing();
	c_Washing(int radius, int size);

	//gets
	inline int getRadius() const
	{
		return this->radius;
	}

	inline int getSide() const
	{
		return this->side;
	}

	void show() const;
};

