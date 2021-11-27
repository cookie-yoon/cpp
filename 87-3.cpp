#include <iostream>
using namespace std;

int main(){
  float R[5];
  cout << "Insert 5 real numbers. >> ";
  cin >> R[0] >> R[1] >> R[2] >> R[3] >> R[4];
  
  float max;
  for(int i = 0; i < 5; i++){
    if(R[i] > max)
      max = R[i];
  }
  
  cout << max << " is the largest number.";
}
