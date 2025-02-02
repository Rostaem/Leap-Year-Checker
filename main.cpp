#include <iostream>
#include <limits>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";

    while (!(cin >> year)) {
        cout << "Invalid input. Please enter a valid year: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    string result = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? "Leap year" : "Not a leap year";

    cout << result << endl;
    return 0;
}