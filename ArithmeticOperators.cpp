#include <iostream>
using namespace std;

int main() {
    // Arithmetic Addition (+) operator
    int num1 = 10, num2 = 20;
    int sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    // Arithmetic Subtraction (-) operator
    int difference = num2 - num1;
    cout << "Difference: " << difference << endl;

    // Arithmetic Multiplication (*) operator
    int product = num1 * num2;
    cout << "Product: " << product << endl;

    // Arithmetic Division (/) operator
    float quotient = static_cast<float>(num2) / num1;  // Ensure at least one operand is a floating-point type for accurate division
    cout << "Quotient: " << quotient << endl;

    // Arithmetic Modulo (%) operator
    int remainder = num2 % num1;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
