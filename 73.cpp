#include <iostream>
using namespace std;

int main(){
  cout << "Insert the address >> ";
  
  char adrs[100];
  cin.getline(adrs, 100, '\n');
  
  cout << "The address is " << adrs;
}
