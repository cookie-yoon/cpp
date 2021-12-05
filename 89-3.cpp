#include <iostream>
using namespace std;

int main(){
  int k, n = 0;
  int sum = 0;

  cout << "Insert the last number. >> ";
  cin >> n;

  for(k = 1; k <= n; k++)
    sum += k;

  cout << "The prefix sum from 1 to " << n << " is " << sum << '.' << endl;
}
