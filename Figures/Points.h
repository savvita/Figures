#pragma once
#include"Point2D.h"
class Points
{
private:
	Point2D* array;
	int size;

public:

	explicit Points(int size);

	Point2D& operator[](const int index);

	//gets
	inline int getSize() const
	{
		return this->size;
	}

	//operators
	friend std::ostream& operator<<(std::ostream& out, Points& points);

	friend std::istream& operator>>(std::istream& in, Points& points);

	//extend array
	void extend(int size);

	//decrease array
	void decrease(int size);

	~Points();
};

