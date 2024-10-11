#include <iostream>
using namespace std;
void calculateDiscountedPrice(string countryName, float ticketPrice);

int main() {
    string countryName;
    float ticketPrice;

    cout << "Enter country's name: ";
    cin >> countryName;

    cout << "Enter the price of ticket in dollars: $";
    cin >> ticketPrice;

    calculateDiscountedPrice(countryName, ticketPrice);
    return 0;
}

void calculateDiscountedPrice(string countryName, float ticketPrice) {
    if (countryName == "Pakistan") {
        ticketPrice = ticketPrice - ticketPrice * 0.05;
    }
    if (countryName == "Ireland") {
        ticketPrice = ticketPrice - ticketPrice * 0.1;
    }
    if (countryName == "India") {
        ticketPrice = ticketPrice - ticketPrice * 0.2;
    }
    if (countryName == "England") {
        ticketPrice = ticketPrice - ticketPrice * 0.3;
    }
    if (countryName == "Canada") {
        ticketPrice = ticketPrice - ticketPrice * 0.45;
    }

    cout << "Final ticket price after discount: $" << ticketPrice;
}
