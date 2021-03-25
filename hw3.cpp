//Написать программу вычисляющую биномиальный коэффициент из n по k
#include <iostream>
using namespace std;
int exclaim (int x,int y){
for(int i=1;i<x+1;i++){
y=y*i;
}
return y;
}
int main(){
int a=1,b,n,k,c=1;
cout«"enter the n coefficient ";
cin»n;
cout«"enter the k coefficient ";
cin»k;
b=n-k;
for(k;k<n;k++){
a=(k+1)*a;
}
cout«a/exclaim(b,c);
return 0;
}