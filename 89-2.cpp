#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
  string text;

  cout << "Insert the string. >> ";
  getline(cin, text);

  for(int i = 0; i < text.length(); i++){ // str.length() returns length of the string.
    for(int j = 0; j <= i; j++) // j < **=** i
      cout << text[j]; // slicing in string available
    cout << endl;
  }
}

// checked the site: https://www.geeksforgeeks.org/convert-string-char-array-cpp/
