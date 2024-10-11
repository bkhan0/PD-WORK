#include <iostream>
using namespace std;
void speedCheck(int);

main(){
  int speed;
  cout << "Speed: ";
  cin >> speed;
  speedCheck(speed);
  }

void speedCheck(int speed){
  if(speed > 100){
    cout << "Halt... YOU WILL BE CHALLENGED!!!";
    } else {
    cout << "Perfect You Are Going Good";
      }	
  }