#include <iostream>
#include <cstring>
using namespace std;

int main(){
  char pw[11];
  cout << "Insert the password to quit the program." << endl;
  while(true){
    cout << "password >> ";
    cin >> pw;
    if(strcmp(pw, "0000") == 0){
      cout << "Quit the program normally." << endl;
      break;
    }
    else
      cout << "Wrong password" << endl;
  }
}
