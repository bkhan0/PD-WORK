#include <iostream>

using namespace std;
void pet(int);

main() {
    int holidays;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    pet(holidays);
}

void pet(int holidays) {
    int totalDays = 365;
    int workingDays = totalDays - holidays;
    int workingDaysMinutesPerDay = 63;
    int holidaysMinutesPerDay = 127;

    int totalGamingTime = (workingDays * workingDaysMinutesPerDay) + (holidays * holidaysMinutesPerDay);
    int NormTime = 30000;
    int difference = NormTime - totalGamingTime;

    int hours = difference / 60;
    int minutes = difference % 60;

    if (difference > 0) {
        cout << "Tom sleeps well." << endl;
        cout << hours << " hours and " << minutes << " minutes less for play." << endl;
    }

    if (difference <= 0) {
        hours = hours * -1;
        minutes = minutes * -1;
        cout << "Tom will run away." << endl;
        cout << hours << " hours and " << minutes << " minutes for play." << endl;
    }

}

