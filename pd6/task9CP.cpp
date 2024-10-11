#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int h, int x, int y) {
    bool inLowerPart = (x >= 0 && x <= 3*h && y >= 0 && y <= h);
    bool onLowerBorder = (x == 0 || x == 3*h || y == 0 || y == h) && inLowerPart;

    bool inUpperPart = (x >= h && x <= 2*h && y >= h && y <= 4*h);
    bool onUpperBorder = (x == h || x == 2*h || y == h || y == 4*h) && inUpperPart;

    if (onLowerBorder || onUpperBorder) {
        return "Border";
    }

    if (inLowerPart || inUpperPart) {
        return "Inside";
    }

    return "Outside";
}

int main() {
    int h, x, y;

    cout << "Enter h: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    cout << checkPointPosition(h, x, y) << endl;

    return 0;
}

