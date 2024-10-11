#include <iostream>
using namespace std;
main() {
    int initialVelocity;
    int acceleration;
    int time;

    cout << "Enter Initial Velocity (m/s): ";
    cin >> initialVelocity;

    cout << "Enter Acceleration (m/s^2): ";
    cin >> acceleration;

    cout << "Enter Time (s): ";
    cin >> time;

    int finalVelocity;
    finalVelocity = initialVelocity + (acceleration * time);

    cout << "Final Velocity (m/s): " << finalVelocity;
}

