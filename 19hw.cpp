#include <iostream>
#include <vector>
#include <string>

//Даны два слова на алфавите {A,C,G,T}. 
//Найти минимальное количество операций добавления, удаления и замены буквы необходимые для приведения слова A к B.


using namespace std;

int main()
{

	long long m, n;

	string s1, s2;
	cin >> s1 >> s2;

	m = s1.length();
	n = s2.length();

	vector<vector<long long> > D(m, vector<long long>(n));
	D[0][0] = 0;

	for (long long i = 1; i < m; i++)
		D[i][0] = D[i - 1][0] + 1;

	for (long long j = 1; j < n; j++)
		D[0][j] = D[0][j - 1] + 1;

	for (long long i = 1; i < m; i++)
		for (long long j = 1; j < n; j++)
		{
			if (s1[i] == s2[j])
				D[i][j] = D[i - 1][j - 1];
			else
				D[i][j] = (D[i - 1][j] > D[i][j - 1]) ? D[i][j - 1] + 1 : D[i - 1][j] + 1;
		}


	cout << "\n" << D[m - 1][n - 1];

	return 0;
}