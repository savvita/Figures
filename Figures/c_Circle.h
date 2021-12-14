#pragma once

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

	void Show() const;

	//c_ChineseCoin operator+(const c_Square& square) const;

	//void* operator+(const c_Square& square)const;

	c_SquareCircle operator+(const c_Square& square) const;
};
