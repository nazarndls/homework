#include <iostream>      
 
using namespace std;
 
int Factorial(int number)
        {
            if (number <= 1)
                return 1;
            else
                return number * Factorial(number - 1);
        }
long Combine(int k, int n)
{
return Factorial(n)/Factorial(k)/Factorial(n-k);
}
int main()
{
    int n = 5;
    int k = 3;
     
    long s = Combine(k,n);
    cout << s << endl;
    system("pause");
    return 0;
}