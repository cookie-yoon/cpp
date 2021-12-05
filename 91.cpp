#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  int count[26] = {0};
  int total = 0;

  string text;
  cout << "DRAWING HISTOGRAM\nInsert the letters up to 10,000 in Eng. The last letter has to be ';'.\n";
  getline(cin, text, ';');

  for(int i = 0; i < text.length(); i++){
    count[(int)tolower(text[i]) - 97]++; // towlower(char) converts uppercase into lowercase, inverse is toupper(char)
  }

  for(int i = 0; i < 26; i++){
    total += count[i];
  }
  
  cout << "The number of letters in total: " << total << endl << endl;
  
  for(int i = 0; i < 26; i++){
    cout << (char)(i + 97) << ' ' << '(' << count[i] << ')' << "\t: ";
    for(int j = 0; j < count[i]; j++)
      cout << '*';
    cout << endl;
  }
}
