#pragma once

class c_Square
{
private:
	int side;

public:
	c_Square();
	explicit c_Square(int side);

	//gets
	inline int getSide()const
	{
		return this->side;
	}

	//sets
	inline void setSide(int side)
	{
		this->side = side;
	}

	void Show() const;
};