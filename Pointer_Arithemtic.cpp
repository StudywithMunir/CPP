#include <iostream>
using namespace std;

int main() {
    // Declare an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Declare a pointer to the first element of the array
    int *ptr = numbers;

    // Print array elements using pointer arithmetic (*(ptr + i) means derefrencing and incrementing to print all values)
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
