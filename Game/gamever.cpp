#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void printEnemy1();
void printEnemy2();
void printEnemy3();
void printPlayer();
void erasePlayer();
void eraseEnemy1();
void eraseEnemy2();
void eraseEnemy3();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
void printMaze();
void launchBullet();
void moveBullet();
char getCharAtxy(short int x, short int y);

int eX1 = 2, eY1 = 2;
int eX2 = 40, eY2 = 2;
int eX3 = 85, eY3 = 2;
int pX = 20, pY = 20;
int bulletX = 0, bulletY = 0;
bool bulletActive = false;
string direction1 = "right";
string direction2 = "right";
string direction3 = "down";

int main(){
    system("cls");
    printMaze();
    printEnemy1();
    printEnemy2();
    printEnemy3();
    printPlayer();

    while(true){
        if (GetAsyncKeyState(VK_LEFT)){
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT)){
            movePlayerRight();
        }
        if (GetAsyncKeyState(VK_UP)){
            movePlayerUp();
        }
        if (GetAsyncKeyState(VK_DOWN)){
            movePlayerDown();
        }

        moveEnemy1();
        moveEnemy2();
        moveEnemy3();
        Sleep(100);
    }
    return 0;
}

char getCharAtxy(short int x, short int y){
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize = {1, 1};
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void gotoxy(int x, int y){
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printEnemy1(){
        gotoxy(eX1, eY1);
        cout << "(~~~) (~~~)";
        gotoxy(eX1, eY1+1);
        cout << "|=| | | |=|";
        gotoxy(eX1, eY1+2);
        cout << "|=| | | |=|";
        gotoxy(eX1 + 4, eY1 +3 );
        cout << "\\_/";
        gotoxy(eX1 + 4, eY1+4);
        cout << "\\ /";
}
void printEnemy2(){
        gotoxy(eX2, eY2);
        cout << "(~~~) (~~~)";
        gotoxy(eX2, eY2+1);
        cout << "|=| | | |=|";
        gotoxy(eX2, eY2+2);
        cout << "|=| | | |=|";
        gotoxy(eX2 + 4, eY2 +3 );
        cout << "\\_/";
        gotoxy(eX2 + 4, eY2+4);
        cout << "\\ /";
}
void printEnemy3(){
        gotoxy(eX3, eY3);
        cout << "(~~~) (~~~)";
        gotoxy(eX3, eY3+1);
        cout << "|=| | | |=|";
        gotoxy(eX3, eY3+2);
        cout << "|=| | | |=|";
        gotoxy(eX3 + 4, eY3 +3 );
        cout << "\\_/";
        gotoxy(eX3 + 4, eY3+4);
        cout << "\\ /";
}

void eraseEnemy1(){
    gotoxy(eX1, eY1);
    cout << "            ";
    gotoxy(eX1, eY1 + 1);
    cout << "            ";
    gotoxy(eX1, eY1 + 2);
    cout << "            ";
    gotoxy(eX1 + 2, eY1 + 3);
    cout << "     ";
    gotoxy(eX1 + 2, eY1 + 4);
    cout << "     ";
}
void eraseEnemy2(){
    gotoxy(eX2, eY2);
    cout << "            ";
    gotoxy(eX2, eY2 + 1);
    cout << "            ";
    gotoxy(eX2, eY2 + 2);
    cout << "            ";
    gotoxy(eX2 + 2, eY2 + 3);
    cout << "     ";
    gotoxy(eX2 + 2, eY2 + 4);
    cout << "     ";
}
void eraseEnemy3(){
    gotoxy(eX3, eY3);
    cout << "            ";
    gotoxy(eX3, eY3 + 1);
    cout << "            ";
    gotoxy(eX3, eY3 + 2);
    cout << "            ";
    gotoxy(eX3 + 2, eY3 + 3);
    cout << "     ";
    gotoxy(eX3 + 2, eY3 + 4);
    cout << "     ";
}

void moveEnemy1(){
    eraseEnemy1(); // Erase the enemy before moving
    if(direction1 == "right"){
        eX1 = eX1 + 1;
        if(eX1 >= 30){
            direction1 = "left";
        }
    } else if(direction1 == "left"){
        eX1 = eX1 - 1;
        if(eX1 <= 2){
            direction1 = "right";
        }
    }
    printEnemy1(); // Reprint enemy, skipping erased lines
}
void moveEnemy2(){
    eraseEnemy2(); // Erase the enemy before moving
    if(direction2 == "right"){
        if(eX2 >= 70){
            direction2 = "left";
        }
        eX2 = eX2 + 1;
    } else if(direction2 == "left"){
        if(eX2 <= 55){
            direction2 = "right";
        }
        eX2 = eX2 - 1;
    }
    printEnemy2();
}
void moveEnemy3(){
    eraseEnemy3(); // Erase the enemy before moving
    if(direction3 == "down"){
        if(eY3 >= 22){
            direction3 = "up";
        }
        eY3 = eY3 + 1;
    } else if(direction3 == "up"){
        if(eY3 <= 4){
            direction3 = "down";
        }
        eY3 = eY3 - 1;
    }
    printEnemy3();
}

void erasePlayer(){
    gotoxy(pX, pY);
    cout << "             ";
    gotoxy(pX, pY + 1);
    cout << "             ";
    gotoxy(pX, pY + 2);
    cout << "             ";
    gotoxy(pX, pY + 3);
    cout << "             ";
    gotoxy(pX, pY + 4);
    cout << "             ";
    gotoxy(pX, pY + 5);
    cout << "             ";
}
void printPlayer(){
    gotoxy(pX + 6, pY);
    cout << "_";
    gotoxy(pX + 5, pY + 1 );
    cout << "/ \\";
    gotoxy(pX + 2, pY + 2);
    cout << "__/~ ~\\__";
    gotoxy(pX, pY + 3 );
    cout << " /   | |   \\ ";
    gotoxy(pX, pY + 4 );
    cout << "=====. .===== ";
    gotoxy(pX + 4, pY + 5 );
    cout << " ||| ";
}
void movePlayerLeft(){
    if (getCharAtxy(pX - 1, pY) == ' ') {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void movePlayerRight(){
    if (getCharAtxy(pX + 15, pY) == ' ') {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}
void movePlayerUp(){
    if (getCharAtxy(pX, pY - 3) == ' ') {
        erasePlayer();
        pY = pY - 1;
        printPlayer();
    }
}
void movePlayerDown(){
    if (getCharAtxy(pX + 1, pY + 7) == ' ') {
        erasePlayer();
        pY = pY + 1;
        printPlayer();
    }
}
void printMaze(){
    cout << "###############################################################################################################" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "#                                                                                                             #" << endl ;
    cout << "###############################################################################################################" << endl ;
}

