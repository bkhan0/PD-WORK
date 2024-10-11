#include <iostream>
using namespace std;
main() {
    int n;

    cout << "Enter the number of sides of the polygon: ";
    cin >> n;

    int sumOfAngles;
    sumOfAngles = (n - 2) * 180;

    cout << "The total sum of internal angles of a " << n << "-sided polygon is: " << sumOfAngles << " degrees." << std::endl;
}
