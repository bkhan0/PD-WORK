#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

int main() {
    string studentName;
    float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology;

    cout << "Enter student name: ";
    cin >> studentName;
    cout << "Enter marks for English: ";
    cin >> marksEnglish;
    cout << "Enter marks for Maths: ";
    cin >> marksMaths;
    cout << "Enter marks for Chemistry: ";
    cin >> marksChemistry;
    cout << "Enter marks for Social Science: ";
    cin >> marksSocialScience;
    cout << "Enter marks for Biology: ";
    cin >> marksBiology;

    float average = calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    string grade = calculateGrade(average);

    cout << "Student Name: " << studentName << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology) {
    return (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology) / 5;
}

string calculateGrade(float average) {
    if (average >= 90) {
        return "A+";
    } else if (average >= 80) {
        return "A";
    } else if (average >= 70) {
        return "B+";
    } else if (average >= 60) {
        return "B";
    } else if (average >= 50) {
        return "C";
    } else if (average >= 40) {
        return "D";
    } else {
        return "F";
    }
}

