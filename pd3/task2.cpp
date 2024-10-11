#include <iostream>
using namespace std;
main() {
    int minutes;
    int fps;

    cout << "Number of Minutes: ";
    cin >> minutes;

    cout << "Frames Per Second: ";
    cin >> fps;

    int totalFrames;
    totalFrames = minutes * 60 * fps;

    cout << "Total Number of Frames " << totalFrames << endl;
}
