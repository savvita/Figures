#pragma once

class c_Rectangle
{
private:
	int height;
	int width;

public:
	c_Rectangle();
	c_Rectangle(int width, int height);

	//gets
	inline int getWidth()const
	{
		return this->width;
	}

	inline int getHeight()const
	{
		return this->height;
	}

	//sets
	inline void setWidth(int width)
	{
		this->width = width;
	}

	inline void setHeight(int height)
	{
		this->height = height;
	}

	void Show() const;
};

