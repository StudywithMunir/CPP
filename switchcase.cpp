#include<iostream>
using namespace std;

int main() {
    char choice;

    cout << "Enter a choice (A, B, or C): ";
    cin >> choice;

    switch (choice) {
        case 'A':
            cout << "You chose option A.";
            break;
        case 'B':
            cout << "You chose option B.";
            break;
        case 'C':
            cout << "You chose option C.";
            break;
        default:
            cout << "Invalid choice.";
    }

    return 0;
}
