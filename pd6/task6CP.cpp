#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

string calculateHotelPrices(string month, int numberOfStays) {
    float studioPricePerNight = 0.0, apartmentPricePerNight = 0.0;
    float studioTotal = 0.0, apartmentTotal = 0.0;

    if (month == "May" || month == "October") {
        studioPricePerNight = 50.0;
        apartmentPricePerNight = 65.0;
        if (numberOfStays > 14) {
            studioPricePerNight *= 0.70;
        } else if (numberOfStays > 7) {
            studioPricePerNight *= 0.95;
        }
    } else if (month == "June" || month == "September") {
        studioPricePerNight = 75.20;
        apartmentPricePerNight = 68.70;
        if (numberOfStays > 14) {
            studioPricePerNight *= 0.80;
        }
    } else if (month == "July" || month == "August") {
        studioPricePerNight = 76.0;
        apartmentPricePerNight = 77.0;
    }

    studioTotal = studioPricePerNight * numberOfStays;
    apartmentTotal = apartmentPricePerNight * numberOfStays;

    if (numberOfStays > 14) {
        apartmentTotal *= 0.90;
    }

    cout << "Apartment: " << apartmentTotal << "$." << endl;
    cout << "Studio: " << studioTotal << "$." << endl;

    return "";
}

int main() {
    string month;
    int numberOfStays;

    cout << "Enter month: ";
    cin >> month;
    cout << "Enter number of stays: ";
    cin >> numberOfStays;

    calculateHotelPrices(month, numberOfStays);

    return 0;
}
