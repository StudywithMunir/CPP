#include <iostream>
using namespace std;

int main() {
    // Logical AND (&&) operator
    int age;
    cout << "Enter your age: ";
    cin >> age;

    //The boolalpha manipulator is used to print boolean values as true or false instead of 1 or 0

    bool isTeenager = (age >= 13) && (age <= 19);
    cout << "Is teenager: " << boolalpha << isTeenager << endl;

    // Logical OR (||) operator
    char gender;
    cout << "Enter your gender (M/F): ";
    cin >> gender;

    bool isMaleOrFemale = (gender == 'M') || (gender == 'F');
    cout << "Is male or female: " << boolalpha << isMaleOrFemale << endl;

    // Logical NOT (!) operator
    bool isAdult;
    cout << "Are you an adult? (1 for Yes, 0 for No): ";
    cin >> isAdult;

    bool isNotAdult = !isAdult;
    cout << "Is not an adult: " << boolalpha << isNotAdult << endl;

    return 0;
}
