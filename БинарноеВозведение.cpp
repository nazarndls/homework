#include <iostream> 

//Реалзовать бинарное возведение в степень

using namespace std;

long long binpow(long long a, long long n)
{
	if (n == 0)
		return 0;
	if (n % 2 == 0)
		return a * binpow(a, n / 2);
	else
		return a * pow(a, n - 1);
}


int main() {
	long long x, n;
	cin >> x >> n;

	cout << binpow(x, n);

	return 0;
}