#include <iostream>

using namespace std;

main() {
    float vegetablePrice;
    float fruitPrice;
    int totalVegetables;
    int totalFruits;
    float coinToRps = 1.94;

    cout << "Enter the vegetable price per kilogram (in coins): ";
    cin >> vegetablePrice;

    cout << "Enter the fruit price per kilogram (in coins): ";
    cin >> fruitPrice;

    cout << "Enter the total kilograms of vegetables: ";
    cin >> totalVegetables;

    cout << "Enter the total kilograms of fruits: ";
    cin >> totalFruits;

    float totalEarningsInCoins;
    totalEarningsInCoins = (vegetablePrice * totalVegetables) + (fruitPrice * totalFruits);
    float totalEarningsInRps;
    totalEarningsInRps = totalEarningsInCoins / coinToRps;

    cout << "Total earnings in Rupees (Rps): " << totalEarningsInRps << endl;
}
