#include <iostream>
using namespace std;

int main(){
  char input[3];
  
  for(;;){
    cout << "Insert 'yes' to quit. >> ";
    cin.getline(input, 3);
    if(input == "yes")
      break;
  }
  
  cout << "Quit the program...";
}

// have to be edited
