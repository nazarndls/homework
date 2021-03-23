#include <iostream>
#include <cmath>
using namespace std;
int greedy(int *r, int s,int a, int maxx){       // если число шагов становится больше, чем в текущем алгоритме в мин.числом шагов, выходим
    int k = 0;
    for(int i = s-1; i > 0; i--){
        while(a >= r[i]){
            k++;
            a = a - r[i];
            if (a == 0 || k > maxx){      
                break;
            }
        }
        if (k > maxx) break;
    }
    return k;
}
void greedycout(int *r, int s,int a){
    int k = 0;
    cout << a << " = ";
    for(int i = s-1; i > 0; i--){
        while(a >= r[i]){
            k++;
            a = a - r[i];
            cout << r[i];
            if (a == 0){
                break;
            } else cout << " + ";
        }
    }
}
int main() {
    setlocale(LC_ALL, "Russian");
    int n, num = 1, temp;
    cin >> n;
    int *ar = new int;
    ar[1] = 1;
    while(ar[num] <= n){
        num ++;
        ar[num] = num*num;
    }
    int g = greedy(ar, num, n,n);
    int num1 = num;
    num--;
    while(num > 2){
        temp = greedy(ar, num, n, g);
        if(temp < g){
            num1 = num;
            g = temp;
        }
        num --;
    }
    greedycout(ar, num1, n); // выводим число в виде нужной суммы квадратов
    delete []ar;
    return 0;
}