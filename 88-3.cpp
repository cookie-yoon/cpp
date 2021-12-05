#include <iostream>
#include <string.h>
// I wonder the reason they write #include <vector> while using <sstream>.
#include <sstream>
using namespace std;

int main(){
  string input, output;
  getline(cin, input);
  
  istringstream names(input);
  for(int i = 1;getline(names, output, ';');i++)
    cout << i << ". " << output << endl;
}

// checked here: https://stackoverflow.com/questions/11719538/how-to-use-stringstream-to-separate-comma-separated-strings
