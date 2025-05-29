#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << fixed << setprecision(12);

    cout << "Sum: " << (num1 + num2) << endl;
    cout << "Difference: " << (num1 - num2) << endl;
    cout << "Product: " << (num1 * num2) << endl;

    if (num2 != 0) {
        cout << "Quotient: " << (num1 / num2) << endl;
    }
    else {
        cout << "Quotient: Division by zero is not allowed." << endl;
    }

    return 0;
}
