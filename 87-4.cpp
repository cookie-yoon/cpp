#include <iostream>
using namespace std;

int main(){
  char text[100];
  cout << "Insert the letters. (under 100)" << endl;
  
  cin.getline(text, '\n');
  
  cout << "The number of letters is " << sizeof(text) << '.';
}

// have to be edited
// using cin.getline
