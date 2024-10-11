#include <iostream>
using namespace std;
main() {
    int bagSize;
    int bagCost;
    int areaCovered;

    cout << "Enter the size of the fertilizer bag in pounds: $";
    cin >> bagSize;

    cout << "Enter the cost of the bag: $";
    cin >> bagCost;

    cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> areaCovered;

    int costPerPound;
    costPerPound = bagCost / bagSize;
    int costPerSquareFoot;
    costPerSquareFoot = bagCost / areaCovered;

    cout << "Cost of the fertilizer per pound: $" << costPerPound << endl;
    cout << "Cost of fertilizing the area per square foot: $" << costPerSquareFoot << endl;
}

