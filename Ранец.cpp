#include <iostream>
#include <vector>

using namespace std;



long long Knapsack(vector <vector<long long>> &D, vector <long long> w, vector <long long> c, long long i, long long j)
{
	if ((i <= 0) || (j <= 0))
		return 0;

	if (D[i][j] != -1)
		return D[i][j];

	long long v1 = Knapsack(D, w, c, i - 1, j);
	if (j >= w[i - 1])
	{
		long long v2 = Knapsack(D, w, c, i - 1, j - w[i - 1]) + c[i - 1];
		D[i][j] = v1 > v2 ? v1 : v2;
	}
	else
		D[i][j] = v1;

	/*cout << "\n";
	for (long long m = 0; m <= w.size(); m++)
	{
		for (long long k = 0; k <= size; k++)
			cout << " " << D[m][k];
		cout << "\n";
	}*/


	return D[i][j];
}




int main() {
	long long W, k;
	cin >> W >> k;
	vector <long long> w(k), c(k);
	for (long long i = 0; i < k; i++) 
	{
		cin >> w[i];
		c[i] = w[i];
	}

	vector <vector<long long>> D;
	vector <long long> help(W + 1, -1);
	for (long long i = 0; i <= k; i++) 
		D.push_back(help);

	for (int i = 0; i <= k; i++)
		D[i][0] = 0;

	for (int i = 0; i <= W; i++)
		D[0][i] = 0;

	cout << "\n\n" << Knapsack(D, w, c, k, W);


	return 0;
}
