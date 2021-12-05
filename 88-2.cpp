// ** I checked the answer.
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char input[100];
  char key[] = "yes";

  while(1){
    cout << "Insert 'yes' to quit. >> ";
    cin.getline(input, 100); // Inserting text longer then length, you would find the infinite loop.

    if(strcmp(input, key) == 0) // strcmp(charArr1, charArr2) returns 0 in case they're same. In others, it does depending on ascii code.
      break;
  }
  
  cout << "Quit the program...";
}
