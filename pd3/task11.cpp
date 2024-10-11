#include <iostream>

using namespace std;

int main() {
    int age;
    int moves;

    cout << "Enter the person's age: ";
    cin >> age;

    cout << "Enter the number of times they've moved: ";
    cin >> moves;

    int averageDuration = age / (moves + 1);

    cout << "Average number of years lived in the same house: " << averageDuration;

    return 0;
}
