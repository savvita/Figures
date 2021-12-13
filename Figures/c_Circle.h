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
};
