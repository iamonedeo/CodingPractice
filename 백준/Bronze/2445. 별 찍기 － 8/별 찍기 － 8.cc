#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < n * 2-1; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i < n)
			{
				if (j <= i) cout << "*";
				else if (j >= n * 2 - 1 - i) cout << "*";
				else cout << " ";
			}
			else
			{
				if (j <= 2 * n - i - 2) cout << "*";
				else if (j >= i+1) cout << "*";
				else cout << " ";
			}
		}
		cout << "\n";
	}
}
