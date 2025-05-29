#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;


    cout << "Character: " << ch << endl;


    cout << "ASCII code (decimal): " << static_cast<int>(ch) << endl;


    cout << "ASCII code (hex): 0x" << hex << uppercase << static_cast<int>(ch) << endl;

    return 0;
}