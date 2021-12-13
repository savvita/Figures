#pragma once

class c_ChineseCoin
{
private:
	//c_Circle circle;
	//c_Square square;
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

	//c_ChineseCoin(const c_Circle& circle, const c_Square& square);

	////gets
	//inline c_Circle getCircle()const
	//{
	//	return this->circle;
	//}

	//inline c_Square	getSquare()const
	//{
	//	return this->square;
	//}

	void Show() const;
};

