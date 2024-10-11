#include <iostream>
using namespace std;
void checkPossibleBonus(int myPosition, int friendPosition);

int main() {
    int myPosition, friendPosition;

    cout << "Enter your position: ";
    cin >> myPosition;

    cout << "Enter your friend's position: ";
    cin >> friendPosition;

    checkPossibleBonus(myPosition, friendPosition);
    return 0;
}

void checkPossibleBonus(int myPosition, int friendPosition) {
    int positionDifference;
    positionDifference = friendPosition - myPosition;

    if (positionDifference < 7) {
        cout << "true";
    } else {
        cout << "false";
    }
}
