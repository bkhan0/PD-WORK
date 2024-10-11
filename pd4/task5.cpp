#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();

main(){
  int x = 50, y = 10;
  system("cls");
  gotoxy(x,y);  
  }

void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;  
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),   coordinates) ; 
  cout << "M. Behar Khan Bari";
  }