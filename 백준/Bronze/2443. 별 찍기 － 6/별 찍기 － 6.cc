#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = n; 0 < i; i--)
	{
		for (int j = 0; j < n * 2 - 1; j++)
		{
			if (j > n - i - 1)
			{
				if (j < n + i - 1) cout << "*";
				else break;
			}
			else cout << " ";
		}
		cout << "\n";
	}

	return 0;
}
