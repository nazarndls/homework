#include <iostream>
using namespace std;

 void DEL_ODD(int* &Ar, int &num){
  int n=0; 
  for(int i=0; i<num; i++){ 
   if(Ar[i]%2!=0) n++;
  }
 int *Ar2 = new int[n]; 
 int j=0; 
 for(int i=0; i<n; i++){ 
 if(Ar[i]%2!=0){ 
 Ar2[j]=Ar[i]; 
 j++; 
 } 
 } 
 delete [] Ar; 
 Ar = Ar2; 
} 
int main() {
  int n; 
  cin >> n; 
  int *Ar = new int[n]; 
  for(int i=0; i<n; i++) cin >> Ar[i]; 
  int n1=0; 
  for(int i=0; i<n; i++){ 
  if(Ar[i]%2!=0) n1++; 
  } 
  DEL_ODD(Ar, n); 
  for(int i=0; i<n1; i++){ 
  cout << Ar[i] << endl; 
  } 
  return 0;
}
