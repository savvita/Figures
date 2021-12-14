#pragma once
#include"Header.h"

class c_ChineseCoin
{
private:
	int radius;
	int side;

public:
	c_ChineseCoin();
	c_ChineseCoin(int radius, int size);

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

