#include "triangle.h"

Triangle::Triangle(int a, int h)
{
    Triangle::set_values(a, h);
}

void Triangle::set_values(int a, int h)
{
    base = a;
    height = h;
}

int Triangle::area()
{
    return base * height / 2;
}