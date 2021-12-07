#include <iostream>
using namespace std;

class Circle{
public:
  int r;
  double A();
};

double Circle::A(){
  return 3.14 * r * r;
}

int main(){
  Circle cake;
  cake.r = 20;
  double area = cake.A();
  
  cout << "A_cake is " << area << '.' << endl;
  
  Circle pizza;
  pizza.r = 30;
  area = pizza.A();
  
  cout << "A_pizza is " << area << '.' << endl;
}
