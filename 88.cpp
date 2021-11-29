#include <iostream>
using namespace std;

int main(){
  string pw, pwCheck;
  
  cout << "Insert new password. >> ";
  getline(cin, pw);
  
  cout << "Insert new password again. >> ";
  getline(cin, pwCheck);
  
  if(pw == pwCheck)
    cout << "same";
  else
    cout << "not same";
}
