#include<iostream>
using namespace std;

int main(){

      // Declare an integer variable
    int num = 42;

    // Declare a pointer to an integer and initialize it with the address of 'num'
    int *ptr = &num;

    // Print the value of 'num' using the pointer dereference operator '*'
    std::cout << "Value of num: " << *ptr << std::endl;

    return 0;
}