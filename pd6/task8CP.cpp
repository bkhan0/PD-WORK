#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);

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
    cout << totalGames;

    return 0;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends) {
    int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - hometownWeekends;
    double gamesInSofia = (weekendsInSofia * 3.0) / 4.0;
    double holidayGames = (holidays * 2.0) / 3.0;
    int totalGames = gamesInSofia + hometownWeekends + holidayGames;

    if (yearType == "leap") {
        totalGames += round(totalGames * 0.15);
    }

    return round(totalGames);
}
