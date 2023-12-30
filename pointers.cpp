#include<iostream>
using namespace std;

int main(){

    // Declare and initialize an integer variable
    int a = 3;

    // Declare a pointer to an integer and initialize it with the address of 'a'
    int *pointer = &a;

    cout<<"The address of A is: "<<pointer;

    return 0;
}