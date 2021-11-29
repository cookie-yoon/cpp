#include <iostream>
using namespace std;

int main(){
  char text[100];
  cout << "Insert the letters. (under 100)" << endl;
  
  cin.getline(text, 100);
  // 'cin.getline(objectArray, maxLength);' saves letters including space.
  
  int count = 0;
  for(int i = 0; i < 100 ; i++){
    if(text[i] == 'x')
      count++;
  }
   
  cout << "The number of 'x' is " << count << '.';
}
