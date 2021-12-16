#include "Points.h"

Points::Points(int size)
{
	if (size < 0)
	{
		size = 0;
	}

	this->array = new Point2D[size];
	this->size = size;
}
Point2D& Points::operator[](const int index)
{
    if (index >= 0 && index < this->size)
        return this->array[index];
    //return array[0];
	return *(new Point2D());
}

void Points::extend(int size)
{
	if (size > 0)
	{
		Point2D* tmp = new Point2D[this->size + size];
		for (int i = 0; i < this->size; i++)
		{
			tmp[i].copy(this->array[i]);
		}
		this->size += size;

		if (this->array)
			delete[]array;

		this->array = tmp;
	}
}

void Points::decrease(int size)
{
	if (size > 0)
	{
		this->size -= size;
		if (this->size  < 0)
		{
			this->size = 0;
		}
		Point2D* tmp = new Point2D[this->size];
		for (int i = 0; i < this->size; i++)
		{
			tmp[i].copy(this->array[i]);
		}

		if (this->array)
			delete[]array;

		this->array = tmp;
	}
}


Points::~Points()
{
	if (this->array)
		delete[] this->array;
}

std::ostream& operator<<(std::ostream& out,  Points& points)
{
	for (int i = 0; i < points.getSize(); i++)
	{
		std::cout << points[i];
	}
	return out;
}

std::istream& operator>>(std::istream& in, Points& points)
{
	for (int i = 0; i < points.getSize(); i++)
	{
		in >> points[i];
	}
	return in;
}
