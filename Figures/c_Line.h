#pragma once
#include"Header.h"

class c_Line
{
private:
	int length;

public:
	c_Line();
	explicit c_Line(int length);

	//gets
	inline int getLength()const
	{
		return this->length;
	}

	//sets
	inline void setLength(int length)
	{
		this->length = length;
	}

	void show() const;
};

