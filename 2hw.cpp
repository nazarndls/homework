#include <iostream>
using namespace std;

int Ackerman(int a, int b){
  if(a == 0) return b + 1;
  else if(b > 0) return Ackerman(a - 1,Ackerman(a,b - 1));
  else return Ackerman(a - 1,1);
}

int main() {
  int x,y;
  cin >> x >> y;
  cout << Ackerman(x,y);
  return 0;