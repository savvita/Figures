﻿#include <iostream>
#include"Header.h"

int main()
{
    c_Circle circle(20);
    c_Square square(100);
    c_Line line(10);
    (circle+square).Show();
    //(square + line).Show();
}
