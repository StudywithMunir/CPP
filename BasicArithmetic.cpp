#include <iostream>
using namespace std;

int main()
{

    // Constant Expressions

    int x;                           // variable declaration.
    x = (3 / 2) + 2;                 // constant expression
    cout << "Value of x is : " << x; // displaying the value of x.

    // Integral Expression
    int x;                        // variable declaration
    int y = 9;                    // variable initialization
    x = y + int(10.0);            // integral expression
    cout << "Value of x : " << x; // displaying the value of x.

    // Float Expressions
    float x = 8.9; // variable initialization
    float y = 5.6; // variable initialization
    float z;       // variable declaration
    z = x + y;
    std::cout << "value of z is :" << z << std::endl; // displaying the value of z.

    return 0;
}