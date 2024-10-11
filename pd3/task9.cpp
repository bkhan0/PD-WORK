#include <iostream>

using namespace std;

main() {
    int number;
    int sum = 0;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    sum = sum + number % 10;
    number = number / 10;

    sum = sum + number % 10;
    number = number / 10;

    sum = sum + number % 10;
    number = number / 10;

    sum = sum + number % 10;

    cout << "Sum of the individual digits is: " << sum << endl;
}
