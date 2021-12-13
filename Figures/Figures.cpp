#include <iostream>
#include"c_ChineseCoin.h"
#include"c_Circle.h"
#include"c_Line.h"
#include"c_Rectangle.h"
#include"c_Square.h"
#include"c_Washing.h"

int main()
{
    c_Square square(10);
    c_Line line(2);
    (square - line).Show();
}
