#include <iostream>
using namespace std;
void tpChecker(int, int);

main() {
    int people, tp;

    cout << "Number of people in the household: ";
    cin >> people;

    cout << "Number of rolls of TP: ";
    cin >> tp;

    tpChecker(people, tp);

}

void tpChecker(int people, int tp) {
    int sheetsPerRoll = 500;
    int sheetsPerDayPerPerson = 57;

    int totalSheets = tp * sheetsPerRoll;
    int dailyUsage = people * sheetsPerDayPerPerson;
    int daysLast = totalSheets / dailyUsage;

    if (daysLast < 15) {
        cout << "Your TP will only last " << daysLast << " days, buy more!" << endl;
    }
    if (daysLast >= 15) {
        cout << "Your TP will last " << daysLast << " days, no need to panic!" << endl;
    }
}

