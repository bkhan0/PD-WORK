#include <iostream>
using namespace std;

void printMenu();
void calculateAggregate(string, float, float, float);
void compareMarks(string, float, string, float);

int main() {
    printMenu();
    string studentName1;
    float matricMarks1, intermediateMarks1, ecatMarks1;
    cout << "Enter your name: ";
    cin >> studentName1;
    cout << "Enter marks obtained in matric (Out of 1100): ";
    cin >> matricMarks1;
    cout << "Enter marks obtained in intermediate (Out of 550): ";
    cin >> intermediateMarks1;
    cout << "Enter marks obtained in ECAT (Out of 400): ";
    cin >> ecatMarks1;
    calculateAggregate(studentName1, matricMarks1, intermediateMarks1, ecatMarks1);

    string studentName2;
    float matricMarks2, intermediateMarks2, ecatMarks2;
    cout << "Enter your name: ";
    cin >> studentName2;
    cout << "Enter marks obtained in matric (Out of 1100): ";
    cin >> matricMarks2;
    cout << "Enter marks obtained in intermediate (Out of 550): ";
    cin >> intermediateMarks2;
    cout << "Enter marks obtained in ECAT (Out of 400): ";
    cin >> ecatMarks2;

    calculateAggregate(studentName2, matricMarks2, intermediateMarks2, ecatMarks2);
    compareMarks(studentName1, ecatMarks1, studentName2, ecatMarks2);
}

void printMenu() {
    cout << "UNIVERSITY OF ENGINEERING AND TECHNOLOGY" << endl;
}

void calculateAggregate(string name, float matricMarks, float intermediateMarks, float ecatMarks) {
    float aggregate;
    aggregate = (matricMarks / 1100 * 30) + (intermediateMarks / 550 * 30) + (ecatMarks / 400 * 40);
    cout << name << "'s Aggregate is: " << aggregate << endl;
}

void compareMarks(string name1, float ecatMarks1, string name2, float ecatMarks2) {
    if (ecatMarks1 > ecatMarks2) {
        cout << name1 << " has roll no. 1" << endl;
    } else {
        cout << name2 << " has roll no. 1" << endl;
    }
}
