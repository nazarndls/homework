#include <iostream> 
#include <string>

//Поиск наибольшей по длине возрастающей подпоследовательности элементов, идущих подряд, в массиве, заданном пользователем

using namespace std;

int main() {
	int n, len{ 0 };
	cin >> n;

	string tmp = "";
	string fin = "";

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if ((i != 0) && (arr[i] > arr[i - 1]))
			tmp += (to_string(arr[i]) + " ");
		else
		{
			if (tmp.length() > fin.length())
				fin = tmp;
			tmp = to_string(arr[i]) + " ";
		}
		if (tmp.length() > fin.length())
			fin = tmp;
	}

	cout << fin;
}