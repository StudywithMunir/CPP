#include<iostream>
using namespace std;

int main() {
    int count = 1;

    do {
        cout << "Iteration " << count << endl;
        ++count;
    } while (count <= 5);

    return 0;
}
