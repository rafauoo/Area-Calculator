#include "circle.h"
#include <math.h>
using namespace std;

void Circle::set_radius(int r)
{
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

