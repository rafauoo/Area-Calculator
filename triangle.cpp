#include "triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(int a, int h)
{
    Triangle::set_values(a, h);
}

void Triangle::set_values(int a, int h)
{
    if (a <= 0 || h <= 0)
    {
        throw invalid_argument("Negative value!");
    }
    base = a;
    height = h;
}

float Triangle::area()
{
    float darea = base * height;
    return darea / 2;
}