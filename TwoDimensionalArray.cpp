#include <iostream>
using namespace std;

int main() {
    // Declare constants for array dimensions
    const int rows = 3;
    const int columns = 3;

    // Declare a 2D array
    int matrix[rows][columns];

    // Ask the user to input elements for the 2D array
    cout << "Enter elements for the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> matrix[i][j];
        }
    }

    // Print the 2D array
    cout << "\n2D Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
