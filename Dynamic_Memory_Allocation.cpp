#include<iostream>
using namespace std;

int main(){

    //Declaring a pointer
    int *ptr;

    //Allocating Dynamic Memory
    ptr = new int;

    // Assign a value to the dynamically allocated memory
    *ptr = 99;

    // Assign a value to the dynamically allocated memory using pointer dereference
    std::cout << "Value at the dynamically allocated memory: " << *ptr << std::endl;

    // Deallocate the dynamically allocated memory
    delete ptr;

    return 0;
}