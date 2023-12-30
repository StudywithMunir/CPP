#include <iostream>

//Function overloading allows you to define multiple functions with the same name but different parameter lists. 

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to concatenate two strings
std::string add(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

int main() {
    std::cout << "Sum of two integers: " << add(5, 10) << std::endl;
    std::cout << "Sum of three integers: " << add(5, 10, 15) << std::endl;
    std::cout << "Concatenation of two strings: " << add("Hello, ", "world!") << std::endl;

    return 0;
}
