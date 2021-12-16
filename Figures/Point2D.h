#pragma once
#include<iostream>

class Point2D
{
private:
	int coordX;
	int coordY;
public:
	Point2D();

	Point2D(int x, int y);

	Point2D(const Point2D& point);

	//sets
	inline void setX(int value)
	{
		this->coordX = value;
	}

	inline void setY(int value)
	{
		this->coordY = value;
	}

	//gets
	inline int getX() const
	{
		return this->coordX;
	}

	inline int getY() const
	{
		return this->coordY;
	}

	//copy from other point
	Point2D* copy(const Point2D& point);

	//operators
	friend std::ostream& operator<<(std::ostream& out, const Point2D& point);

	friend std::istream& operator>>(std::istream& in, Point2D& point);
};

