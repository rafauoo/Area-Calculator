#include <iostream>
#include "rectangle.h"
using namespace std;

int Rectangle::area()
{
    return width * height;
}

void Rectangle::set_values(int x, int y)
{
    if (x <= 0 || y <= 0)
    {
        throw invalid_argument("Negative value!");
    }
    width = x;
    height = y;
}

Rectangle::Rectangle(int x, int y)
{
    Rectangle::set_values(x, y);
}