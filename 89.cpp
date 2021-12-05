#include <iostream>
#include <string>
// Header without the extension is recommended in C++.
// Also, including <string> means utilizing string class, such as data type 'string'.
// So it is distinguished from 'string.h'.

using namespace std;

int main(){
  string name, address, age;
  
  cout << "Your name? ";
  getline(cin, name);
  
  cout << "Your address? ";
  getline(cin, address);
  
  cout << "Your age? ";
  getline(cin, age);
  
  cout << name << ", " << address << ", " << age << endl;
}
