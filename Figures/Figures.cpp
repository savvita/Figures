#include <iostream>
#include"Header.h"
#include"Points.h"

int main()
{
    //c_Circle circle(20);
    //c_Square square(100);
    //c_Line line(10);
    //(circle+square).show();
    //(square + line).show();
    //(circle + square).show();
    //(circle + &square).show();
    //c_Circle circle;
    //std::cin >> circle;
    //std::cout << circle;

    //c_Square square;
    //std::cin >> square;
    //std::cout << square;
    Points points(3);
    //for (int i = 0; i < points.getSize(); i++)
    //{
    //    points[i].setX(i);
    //    points[i].setY(-i);
    //}
    //points.extend(5);
    std::cin >> points;
    std::cout << points << "==============\n";

    points.decrease(9);
    std::cout << points;
}
