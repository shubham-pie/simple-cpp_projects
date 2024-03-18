#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double pi = 3.14;
    // Area of Cirlce

    double radius, area;

    cout << "Enter value of the radius ";
    cin >> radius;
    area = radius * pi * radius; //area = pi * r * r
    cout << "Area of circle with radius " << radius << " is " << area;
}