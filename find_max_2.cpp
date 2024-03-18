#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // program to find maximum between maximum between two numbers
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater";
    }
    else if (a < b)
    {
        cout << b << " is greater";
    }

    else
    {
        cout << "both are equal";
    }
    return 0;
}