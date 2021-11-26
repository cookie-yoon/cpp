#include <iostream>
using namespace std;

int main(){
  for(int n = 1; n < 100; n += 10){
    for(int i = 0; i < 10; i++)
      cout << n + i << '\t';
    cout << endl;
  }
}
