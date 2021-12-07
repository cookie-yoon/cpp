#include <iostream>
using namespace std;

class Rect{
public:
  int w;
  int h;
  int A();
};

int Rect::A(){
  return w * h;
}

int main(){
  Rect rect;
  rect.w = 3;
  rect.h = 5;
  
  cout << "A_rect is " << rect.A() << '.' << endl;
}
