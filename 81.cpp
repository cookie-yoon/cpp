#include <iostream>
#include <string>
using namespace std;

int main(){
  string s, t;
  
  cout << "p1 >> ";
  cin >> s;
  
  cout << "p2 >> ";
  cin >> t;
  
  if(s == "scissors" && t == "paper")
    cout << "p1 wins." << endl;
  if(s == "scissors" && t == "rock")
    cout << "p2 wins." << endl;
  if(s == "scissors" && t == "scissors")
    cout << "Tie." << endl;
  
  if(s == "rock" && t == "paper")
    cout << "p2 wins." << endl;
  if(s == "rock" && t == "rock")
    cout << "Tie." << endl;
  if(s == "rock" && t == "scissors")
    cout << "p1 wins." << endl;
  
  if(s == "paper" && t == "paper")
    cout << "Tie." << endl;
  if(s == "paper" && t == "rock")
    cout << "p1 wins." << endl;
  if(s == "paper" && t == "scissors")
    cout << "p2 wins." << endl;
}
