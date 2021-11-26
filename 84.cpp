#include <iostream>

int main(){
  char name[20];
  
  std::cout << "Insert the name. ";
  std::cin >> name;
  std::cout << "Welcome, " << name << '.';
  
  return 0;
}

/*
  If you insert the name containing blank, only the text until blank will be saved into name.
  Wanting to take it with last name, you should write like this :
  std::cin >> name >> lastName;
*/
