#include <iostream>
using namespace std;
main() {
    int imposters;
    int players;

    cout << "Enter Imposter Count: ";
    cin >> imposters;

    cout << "Enter Player Count: ";
    cin >> players;

    int chance = (100 * imposters) / players;

    cout << "Chance of being an imposter is: " << chance << "%";

}
