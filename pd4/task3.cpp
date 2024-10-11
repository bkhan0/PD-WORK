#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();

main(){
  int x = 4, y = 2;
  system("cls");
  printMaze();
  gotoxy(x,y);

  }

void printMaze(){
  cout << "########################" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "#                      #" << endl ;
  cout << "########################" << endl ;
  }

void gotoxy(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),   coordinates) ;
  cout << "P";
  gotoxy(x, y);
  cout << " ";
  Sleep(300);
  }
