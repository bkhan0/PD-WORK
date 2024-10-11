#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) {
    int examTimeInMinutes = examHour * 60 + examMinute;
    int arrivalTimeInMinutes = studentHour * 60 + studentMinute;
    int timeDifference = arrivalTimeInMinutes - examTimeInMinutes;
    string result;

    if (timeDifference > 0) {
        result = "Late\n";
        if (timeDifference >= 60) {
            result += to_string(timeDifference / 60) + " hour(s) and " + to_string(timeDifference % 60) + " minute(s) after the start.";
        } else {
            result += to_string(timeDifference) + " minute(s) after the start.";
        }
    } else if (timeDifference <= 0 && timeDifference >= -30) {
        result = "On time\n";
        if (timeDifference < 0) {
            result += to_string(abs(timeDifference)) + " minute(s) before the start.";
        }
    } else {
        result = "Early\n";
        if (abs(timeDifference) >= 60) {
            result += to_string(abs(timeDifference) / 60) + " hour(s) and " + to_string(abs(timeDifference) % 60) + " minute(s) before the start.";
        } else {
            result += to_string(abs(timeDifference)) + " minute(s) before the start.";
        }
    }

    return result;
}

int main() {
    // Test the function
    int examHour, examMinute, studentHour, studentMinute;
    cin >> examHour >> examMinute >> studentHour >> studentMinute;

    cout << checkStudentStatus(examHour, examMinute, studentHour, studentMinute) << endl;

    return 0;
}
