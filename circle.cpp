#include "circle.h"
#include <math.h>
#include <iostream>
using namespace std;

void Circle::set_radius(int r)
{
    if (r <= 0)
    {
        throw invalid_argument("Negative value!");
    }
    radius = r;
}

Circle::Circle(int r)
{
    Circle::set_radius(r);
}

float Circle::area()
{
    return M_PI * radius * radius;
}

