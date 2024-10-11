#include <iostream>
using namespace std;

void printH();
void printA();
void printS();
void printN();

int main() {
    printH();
    cout << endl;
    printA();
    cout << endl;
    printS();
    cout << endl;
    printS();
    cout << endl;
    printA();
    cout << endl;
    printN();

    return 0;
}

void printH() {
    cout << "##   ##" << endl;
    cout << "##   ##" << endl;
    cout << "####### " << endl;
    cout << "##   ##" << endl;
    cout << "##   ##" << endl;
}

void printA() {
    cout << " #####" << endl;
    cout << "##   ## " << endl;
    cout << "####### " << endl;
    cout << "##   ##" << endl;
    cout << "##   ##" << endl;
}

void printS() {
    cout << " ##### " << endl;
    cout << "##      " << endl;
    cout << " #####  " << endl;
    cout << "     ## " << endl;
    cout << " ##### " << endl;
}

void printN() {
    cout << "##   ##" << endl;
    cout << "###  ##" << endl;
    cout << "## # ##" << endl;
    cout << "##  ###" << endl;
    cout << "##   ##" << endl;
}
