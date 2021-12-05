#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
  string text;

  cout << "Insert the string. >> ";
  getline(cin, text);

  for(int i = 0; i < text.length() + 1; i++){
    for(int j = 0; j < i; j++)
      cout << text[j];
    cout << endl;
  }
}

// checked the site: https://www.geeksforgeeks.org/convert-string-char-array-cpp/
