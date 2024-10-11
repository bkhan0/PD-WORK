#include <iostream>
using namespace std;
main() {
    string name;
    float weightLossGoal;

    cout << "Enter the name of the person: ";
    cin >> name;

    cout << "Enter the target weight loss in kilograms: ";
    cin >> weightLossGoal;

    float daysRequired;
    daysRequired = weightLossGoal * 15;

    cout << name << " will need " << daysRequired << " days to lose " << weightLossGoal << " kg of weight by following the doctors suggestion" << endl;
}
