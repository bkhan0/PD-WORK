#include <iostream>
using namespace std;

int main() {
    char serviceCode,timeCode;
    int minutesUsed = 0;
    float amountDue = 0.0;
    string serviceType = "";

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> serviceCode;

    if (serviceCode == 'P' || serviceCode == 'p'){
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >>  timeCode;
    }
    cout << "Enter the number of minutes used: ";
    cin >> minutesUsed;

    if (serviceCode == 'P' || serviceCode == 'p') {
        cout << "Service Type: Premium \n";
        cout << "Total minutes used: " << minutesUsed << " minutes \n";
        amountDue = 25.0;

        if(timeCode == 'D' || timeCode == 'd'){
            if(minutesUsed > 75){
                amountDue += (minutesUsed-75) * 0.1;
            }
        } else if(timeCode == 'N' || timeCode == 'n'){
            if(minutesUsed > 100){
                amountDue += (minutesUsed-100) * 0.05;
            }
        } else {
            cout << "invalid time code";
        }

            cout << "Amount Due: $" << amountDue;

    }
    else if (serviceCode == 'R' || serviceCode == 'r') {

        cout << "Service Type: Regular \n";
        cout << "Total minutes used: " << minutesUsed << " minutes \n";
        amountDue = 10.0;

        if(minutesUsed > 50){
            amountDue += (minutesUsed-50) * 0.20;
        }
        cout << "Amount Due: $" << amountDue;
    } else {
        cout << "Invalid Service code.";
    }

    return 0;
}
