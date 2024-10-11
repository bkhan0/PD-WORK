#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends) {
    const int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - hometownWeekends;
    double gamesInSofia = (weekendsInSofia * 3.0) / 4.0;
    double holidayGames = (holidays * 2.0) / 3.0;
    int totalGames = gamesInSofia + hometownWeekends + holidayGames;

    if (yearType == "leap") {
        totalGames += totalGames * 0.15;
    }

    return floor(totalGames);
}

int main() {
    string yearType;
    int holidays, hometownWeekends;

    cout << "Enter the year type (leap/normal): ";
    cin >> yearType;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of weekends spent in hometown: ";
    cin >> hometownWeekends;

    int totalGames = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout << "Vladimir has played volleyball " << totalGames << " times throughout the year." << endl;

    return 0;
}
