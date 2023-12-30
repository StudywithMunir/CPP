#include <iostream>
using namespace std;

int main()
{

    // Implicit Typecasting: Automatic conversion of a variable from one data type to another by the compiler, typically when there is no loss of data or precision.
    int num = 16;
    double dnum = num;

    cout << "Implicit Typecasting:" << endl;
    cout << "Integer Number: " << num << endl;
    cout << "Double Number: " << dnum<< endl
         << endl;

    // Explicit Typecasting: Manual conversion of a variable from one data type to another using programming constructs, such as casting operators or functions, often requiring explicit indication by the programmer and may involve potential loss of data or precision.
    double dunum = 15.6;
    int inum = static_cast<int>(dnum);

    cout << "Explicit Typecasting:" << endl;
    cout << "Double Number: " << dunum << endl;
    cout << "Converted Integer: " << inum << endl << endl;


    // Typecasting between related types
    char ch = 'M';
    int asciiValue = static_cast<int>(ch);

    cout << "Typecasting Between Related Types:" << endl;
    cout << "Character: " << ch << endl;
    cout << "ASCII Value (int): " << asciiValue << endl;

    return 0;
}
