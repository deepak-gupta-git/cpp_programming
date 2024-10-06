#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPositive, isNegative, isZero;

    cout << "Enter an integer: ";
    cin >> number;

    isPositive = (number > 0);
    isNegative = (number < 0);
    isZero = (number == 0);

    if (isPositive) {
        cout << "The number is positive." << endl;
    } else if (isNegative) {
        cout << "The number is negative." << endl;
    } else if (isZero) {
        cout << "The number is zero." << endl;
    }

    return 0;
}
