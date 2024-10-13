#include <iostream>
#include <string>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);
int main() {
    string fruit, dayOfWeek;
    double quantity;

    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter quantity: ";
    cin >> quantity;

    float totalPrice = calculateFruitPrice(fruit, dayOfWeek, quantity);
    if (totalPrice != -1) {
        cout << "Total Price: $" << totalPrice << endl;
    }

    return 0;
}

float calculateFruitPrice(string fruit, string dayOfWeek, double quantity) {
    float price = 0.0;
    bool isWeekend = false;

    if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday") {
        isWeekend = true;
    }

    if (fruit == "banana") {
        if (isWeekend) {
            price = 2.70;
        } else {
            price = 2.50;
        }
    } else if (fruit == "apple") {
        if (isWeekend) {
            price = 1.25;
        } else {
            price = 1.20;
        }
    } else if (fruit == "orange") {
        if (isWeekend) {
            price = 0.90;
        } else {
            price = 0.85;
        }
    } else if (fruit == "grapefruit") {
        if (isWeekend) {
            price = 1.60;
        } else {
            price = 1.45;
        }
    } else if (fruit == "kiwi") {
        if (isWeekend) {
            price = 3.00;
        } else {
            price = 2.70;
        }
    } else if (fruit == "pineapple") {
        if (isWeekend) {
            price = 5.60;
        } else {
            price = 5.50;
        }
    } else if (fruit == "grapes") {
        if (isWeekend) {
            price = 4.20;
        } else {
            price = 3.85;
        }
    } else {
        cout << "errors" << endl;
        return -1;
    }

    if (dayOfWeek != "Monday" && dayOfWeek != "Tuesday" && dayOfWeek != "Wednesday" &&
        dayOfWeek != "Thursday" && dayOfWeek != "Friday" && dayOfWeek != "Saturday" &&
        dayOfWeek != "Sunday") {
        cout << "error" << endl;
        return -1;
    }

    return price * quantity;
}

