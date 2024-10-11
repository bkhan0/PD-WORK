#include <iostream>
using namespace std;

void larger(int hours, int minutes);

int main() {
    int hours, minutes;
    cout << "Enter Number of hours: ";
    cin >> hours;
    cout << "Enter number of minutes: ";
    cin >> minutes;
    larger(hours, minutes);
}

void larger(int hours, int minutes) {
    int hoursInMinutes;
    hoursInMinutes = hours * 60;
    if (hoursInMinutes > minutes) {
        cout << hours;
    } else {
        cout << minutes;
    }
}
