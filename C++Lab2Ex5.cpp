#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double score;

    cout << "Enter test score (0.0 to 9.0): ";
    cin >> score;

    cout << fixed << setprecision(1); 

    if (score >= 0.0 && score <= 4.4) {
        cout << "Unsatisfactory (2.0)" << endl;
    }
    else if (score >= 4.5 && score <= 5.2) {
        cout << "Satisfactory (3.0)" << endl;
    }
    else if (score >= 5.3 && score <= 6.2) {
        cout << "Above satisfactory (3.5)" << endl;
    }
    else if (score >= 6.3 && score <= 7.2) {
        cout << "Good (4.0)" << endl;
    }
    else if (score >= 7.3 && score <= 8.2) {
        cout << "Above good (4.5)" << endl;
    }
    else if (score >= 8.3 && score <= 9.0) {
        cout << "Very good (5.0)" << endl;
    }
    else {
        cout << "Invalid number of points!" << endl;
    }

    return 0;
}
