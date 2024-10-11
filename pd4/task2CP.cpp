#include <iostream>
using namespace std;
void reverse(string);

main(){
  string s;
  cout << "Enter 'true' or 'false' : ";
  cin >> s;
  reverse(s);
  }

void reverse(string s){
  if (s == "true"){
      cout << "false";
    } 
  if(s == "false"){
      cout << "true";
    }
  }