#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const double pi = 3.14;
    // CIRCUMFERNECE of circle

    int radii;
    cout << "Enter the radius ";
    cin >> radii;
    double circum = 2 * radii * pi;
    cout << "Circumference is " << circum;
    return 0;
}