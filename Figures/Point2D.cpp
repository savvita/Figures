#include "Point2D.h"

Point2D::Point2D()
{
	this->coordX = this->coordY = 0;
}

Point2D::Point2D(int x, int y)
{
	this->coordX = x;
	this->coordY = y;
}

Point2D::Point2D(const Point2D& point)
{
	this->coordX = point.getX();
	this->coordY = point.getY();
}

Point2D* Point2D::copy(const Point2D& point)
{
	this->coordX = point.getX();
	this->coordY = point.getY();
	return this;
}

std::ostream& operator<<(std::ostream& out, const Point2D& point)
{
	out << point.coordX << "\t" << point.coordY << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, Point2D& point)
{
	in >> point.coordX;
	in >> point.coordY;
	return in;
}