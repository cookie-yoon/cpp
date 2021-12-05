#include <iostream>
#include <string.h>
// I wonder the reason they write #include <vector> while using <sstream>.
#include <sstream>
using namespace std;

int main(){
  string input, output;
  getline(cin, input);
  
  istringstream names(input);
  int len = 0;
  string longest;
  for(int i = 1;getline(names, output, ';');i++){
    cout << i << ". " << output << endl;
    if(output.length() > len){
      len = output.length();
      longest = output;
    }
  }
  cout << "The longest name is " << longest << '.';
}

// checked here: https://stackoverflow.com/questions/11719538/how-to-use-stringstream-to-separate-comma-separated-strings
