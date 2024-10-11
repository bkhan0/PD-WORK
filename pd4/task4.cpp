#include <iostream>
#include<windows.h>
using namespace std;
void movePlayer(int x, int y);
void printMaze();

main(){
  int x = 4, y = 2;
  system("cls");
  printMaze();
  while(true){
    movePlayer(x,y);
    x=x+1;
    if (x == 21){
      x =3;
      }
    }
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

void movePlayer(int x, int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),   coordinates) ;
  cout << "P";
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),   coordinates) ;
  Sleep(300);
  cout << " ";
  }
