#include <iostream>
using namespace std;

int sum(int, int); // skipping names of the parameters in function declaration available

int main(){
  int n = 0;

  cout << "Insert the last number. >> ";
  cin >> n;

  cout << "The prefix sum from 1 to " << n << " is " << sum(1, n) << '.' << endl;
  
  return 0;
}

int sum(int a, int b){
  int k, res = 0;
  for(k = a; k <= b; k++)
    res += k;

  return res;
}
