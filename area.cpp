#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
using namespace std;
int main()
{
    int choice;
    cout << "Choose a shape:" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Circle" << endl;
    cin >> choice;
    switch(choice)
    {
        case 1: {
            int x, y;
            cout << "Enter sizes of sides" << endl;
            cin >> x >> y;
            Rectangle rect(x, y);
            cout << rect.area() << endl;
            break;}
        case 2: {
            int a, h;
            cout << "Enter base size and height" << endl;
            cin >> a >> h;
            Triangle tri(a, h);
            cout << tri.area() << endl;
            break;}
        case 3: {
            int rad;
            cout << "Enter radius" << endl;
            cin >> rad;
            Circle circ(rad);
            cout << circ.area() << endl;
            break;}
        default:
            break;
    }
}