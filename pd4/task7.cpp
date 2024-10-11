#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void movePlayer(int x, int y);

main() {
    int x = 4;
    int y = 2;
    int direction = 1;
    system("cls");
    printMaze();

    while (true) {
        movePlayer(x, y);

        if (direction == 1) {
            if (y < 9) {
                y++;
            } else {
                direction = -1;
            }

        } else {
            if (y > 2) {
                y--;
            } else {
                direction = 1;
            }

        }
    }
}

void printMaze() {
    cout << "########################" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "#                      #" << endl;
    cout << "########################" << endl;
}

void movePlayer(int x, int y) {
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
    cout << "P";
    Sleep(300);
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
    cout << " ";
}
