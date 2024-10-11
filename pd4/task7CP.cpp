#include <iostream>
using namespace std;

void calculatePrice(int redRoses, int whiteRoses, int tulips);

int main() {
    int redRoses, whiteRoses, tulips;

    cout << "Red Roses: ";
    cin >> redRoses;

    cout << "White Roses: ";
    cin >> whiteRoses;

    cout << "Tulips: ";
    cin >> tulips;

    calculatePrice(redRoses, whiteRoses, tulips);
}

void calculatePrice(int redRoses, int whiteRoses, int tulips) {
    float redRosesPrice, whiteRosesPrice, tulipsPrice, totalPrice, finalPrice;

    redRosesPrice = redRoses * 2;
    whiteRosesPrice = whiteRoses * 4.1;
    tulipsPrice = tulips * 2.5;

    totalPrice = redRosesPrice + whiteRosesPrice + tulipsPrice;

    cout << "Original Price: $" << totalPrice << endl;

    if (totalPrice > 200) {
        finalPrice = totalPrice - totalPrice * 0.2;
        cout << "Price after Discount: $" << finalPrice;
    }

    if (totalPrice <= 200) {
        cout << "No discount applied.";
    }
}
