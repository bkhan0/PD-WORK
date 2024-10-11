#include <iostream>

using namespace std;

int main() {
    int n;
    int w;
    int h;

    cout << "Number of square meters you can paint: ";
    cin >> n;

    cout << "Width of the single wall (in meters): ";
    cin >> w;

    cout << "Height of the single wall (in meters): ";
    cin >> h;

    int wallArea;
    wallArea = w * h;
    int wallsPainted;
    wallsPainted = n / wallArea;

    cout << "Number of walls u can paint: " << wallsPainted << endl;

    return 0;
}

