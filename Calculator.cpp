#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

double add(double n1, double n2) {
    return n1 + n2;
}

double subtract(double n1, double n2) {
    return n1 - n2;
}

double multiply(double n1, double n2) {
    return n1 * n2;
}

double divide(double n1, double n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        cout << "Error: Division by zero" << endl;
        return 0.0;
    }
}

int main() {
    double n1, n2, answer;
    char input;

    cout << "********************************************" << endl;
    cout << "          Basic Calculator by Munir          " << endl;
    cout << "********************************************" << endl;

    do {
        cout << "Enter First number: ";
        cin >> n1;

        cout << "Enter Second number: ";
        cin >> n2;

        cout << "Operations: A (Addition), S (Subtraction), M (Multiplication), D (Division)" << endl;
        cout << "Enter your Operation: ";
        cin >> input;

        switch (input) {
            case 'A':
                answer = add(n1, n2);
                break;
            case 'S':
                answer = subtract(n1, n2);
                break;
            case 'M':
                answer = multiply(n1, n2);
                break;
            case 'D':
                answer = divide(n1, n2);
                break;
            default:
                cout << "Invalid operation" << endl;
                continue; // Skip the rest of the loop and start over
        }

        cout << "--------------------------------------------" << endl;
        cout << "Result: " << fixed << setprecision(2) << answer << endl;
        cout << "--------------------------------------------" << endl;

        cout << "Press 'Q' to quit or any other key to continue: ";
        cin >> input;

    } while (input != 'Q');

    cout << "********************************************" << endl;
    cout << "        Thank you for using the calculator!   " << endl;
    cout << "********************************************" << endl;

    return 0;
}
