#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    cout << "Even: " << (number % 2 == 0 ? "YES" : "NO") << endl;
    cout << "Divisible by 8: " << (number % 8 == 0 ? "YES" : "NO") << endl;
    cout << "Divisible by 16: " << (number % 16 == 0 ? "YES" : "NO") << endl;

    cout << "Octal format: " << oct << number << endl;
    cout << "Hexadecimal format: " << hex << number << endl;

    return 0;
}
