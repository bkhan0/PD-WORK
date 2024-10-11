#include <iostream>
using namespace std;

main() {
    string movieName;
    int adultTicketPrice;
    int childTicketPrice;
    int numAdultTickets;
    int numChildTickets;
    int donationPercentage;

    cout << "Enter the movie name: ";
    cin >> movieName;
    cout << "Enter the adult ticket price: $";
    cin >> adultTicketPrice;

    cout << "Enter the child ticket price: $";
    cin >> childTicketPrice;

    cout << "Enter the number of adult tickets sold: ";
    cin >> numAdultTickets;

    cout << "Enter the number of child tickets sold: ";
    cin >> numChildTickets;

    cout << "Enter the percentage of amount to donate to charity: ";
    cin >> donationPercentage;

    int totalAdultSales = adultTicketPrice * numAdultTickets;
    int totalChildSales = childTicketPrice * numChildTickets;
    int totalAmount = totalAdultSales + totalChildSales;

    int donationAmount = (totalAmount * donationPercentage) / 100;
    int remainingAmount = totalAmount - donationAmount;

    cout << "Movie: " << movieName << endl;
    cout << "Total amount generated from tickets sales: $" << totalAmount << endl;
    cout << "Donation to charity (10%): $" << donationAmount << endl;
    cout << "Remaining amount after donation: $" << remainingAmount << endl;
}
