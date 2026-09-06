// Write a C++ program that illustrates the concept of Function Overloading.
// NAME-Tejas Amol Ghadage
// PRN-B25ET1063

#include <iostream>
using namespace std;

// Subtracts two integers
int subtract(int a, int b)
{
    return a - b;
}

// Subtracts three integers
int subtract(int a, int b, int c)
{
    return a - b - c;
}

// Subtracts two decimal numbers
float subtract(float a, float b)
{
    return a - b;
}

int main()
{
    int a, b, c;
    float x,y;

    // Take two integers from the user
    cout << "Enter 2 integers: ";
    cin >> a >> b;
    cout << "Subtraction = " << subtract(a, b) << endl;

    // Take three integers from the user
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;
    cout << "Subtraction  = " << subtract(a, b, c) << endl;

    // Take two decimal numbers from the user
    cout << "Enter 2 decimal numbers: ";
    cin >> x >> y;
    cout << "Subtraction  = " << subtract(x, y) << endl;

    return 0;
}
