#include <iostream>
#include <string>
using namespace std;

int calc(int, int, int);

int main(){
  string opList = "+-*/%";
  char op;
  int n1, n2, ans;

  while(1){
    cout << "? ";
    cin >> n1 >> op >> n2;
    
    ans = calc(n1, n2, opList.find(op));

    cout << n1 << ' ' << op << ' ' << n2 << " = " << ans << endl << endl;
  }
}

int calc(int a, int b, int x){
  if(x == 0)
    return a + b;
  else if(x == 1)
    return a - b;
  else if(x == 2)
    return a * b;
  else if(x == 3)
    return a / b;
  else if(x == 4)
    return a % b;
  else
    cout << "Error: undeclared operator\n\tThe result will be '0' but not is actually." << endl;
    return 0;
}
