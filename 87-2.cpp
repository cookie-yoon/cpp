#include <iostream>
using namespace std;

int main(){
  int a, b;
  cout << "Insert two numbers. >> ";
  cin >> a >> b;
  
  if(a > b)
    cout << a << " is the largest number.";
  else
    cout << b << " is the largest number.";
}
