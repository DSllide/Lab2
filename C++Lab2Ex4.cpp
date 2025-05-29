#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int option;
    double temperature;

    cout << "Enter conversion option (1 - Celsius to Fahrenheit, 2 - Fahrenheit to Celsius): ";
    cin >> option;

    if (option != 1 && option != 2) {
        cout << "Invalid option!" << endl;
        return 1; // Завершение программы с кодом ошибки
    }

    cout << "Enter temperature: ";
    cin >> temperature;

    cout << fixed << setprecision(2);

    if (option == 1) {
        if (temperature < -273.15) {
            cout << "Too cold to compute!" << endl;
        }
        else {
            double fahrenheit = temperature * 9.0 / 5.0 + 32;
            cout << "Result: " << fahrenheit << " F" << endl;
        }
    }
    else if (option == 2) {
        if (temperature < -459.67) {
            cout << "Too cold to compute!" << endl;
        }
        else {
            double celsius = (temperature - 32) * 5.0 / 9.0;
            cout << "Result: " << celsius << " C" << endl;
        }
    }

    return 0;
}
