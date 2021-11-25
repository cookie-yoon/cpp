#include <iostream>
#include <string>

using namespace std;

int main(){
  string song("Halo");
  string answer("Beyonce");
  string singer;
  
  cout << "Whose song '" + song + "' is? ";
  cout << "(Hint: The singer starts with 'B'.) ";
  
  getline(cin, singer);
  /*
  difference between cin.getline() and getline()
  
  1. cin.getline(char buf[], int size, char delimitChar)
  - buf[]: the object array
  - size: the size of buf[]
  - delimitChar: the last char of buf[]
  * belongs to iostream library
  
  2. getline(cin, str) or getline(cin, str, char delimitChar)
  - cin: accept the input from the standard device
  - str: the object string
  * using string class from cpp standard library
  */
  if(singer == answer)
    cout << "That's the answer.";
  else
    cout << "That's wrong. It's " + answer + "'s." << endl;
    // 'cout << endl' means go to the next line
    // I wonder why only l32 has '<< endl'.
}
