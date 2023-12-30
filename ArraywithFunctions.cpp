#include <iostream>
#include <climits> // For INT_MAX and INT_MIN
using namespace std;

// Function to find the minimum element in the array
int findMin(const int arr[], int size) {
    int minElement = INT_MAX;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

// Function to find the maximum element in the array
int findMax(const int arr[], int size) {
    int maxElement = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Function to calculate the average of elements in the array
double calculateAverage(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

// Function to calculate the sum of elements in the array
int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    // Get array size from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Get array elements from the user
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Call functions to find min, max, average, and sum
    int minElement = findMin(arr, size);
    int maxElement = findMax(arr, size);
    double average = calculateAverage(arr, size);
    int sum = calculateSum(arr, size);

    // Display the results
    cout << "\nResults:" << endl;
    cout << "Minimum Element: " << minElement << endl;
    cout << "Maximum Element: " << maxElement << endl;
    cout << "Average: " << average << endl;
    cout << "Sum: " << sum << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
