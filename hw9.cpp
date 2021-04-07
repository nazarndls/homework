// реализация алгоритма 
// отбора простых чисел решето Эратосфена
#include <iostream>
#include <stdlib.h>

static const int N = 100;
int main(int argc, char* argv[]) {
  unsigned int i;
  unsigned int* a = new unsigned int[N];
  memset(a, 1, N* sizeof(unsigned int));
  for(i = 2; i < N; i++) {
    if(a[i]) {
      for(unsigned int j = i; j* i < N; j++)
        a[i*j] = 0; 
    }
  }
  
  for(i = 1; i < N; i++) {
    if(a[i]) {
      std::cout << " " << i << std::endl;
    }
  }
  if(a)
    delete[]a;
  
  system("pause");
  return 0;
}
