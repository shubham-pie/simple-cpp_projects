#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // To find maximum among three numbers

    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c; // take the input of 3 numbers
    if ((a > b) && (a > c))
    { // using AND gate logic for a
        cout << a << " is greater";
    }

    else if ((b > a) && (b > c))
    { // same for b
        cout << b << " is greater";
    }

    else if ((c > a) && (c > b))
    { // same for c
        cout << c << " is greater";
    }

    else
    {
        cout << "All are equal";
    }

    return 0;
}