#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < n * 2 - 1; i++)
	{
		for (int j = 0; j < n * 2 - 1; j++)
		{
			if (i < n)
			{
				if (j >= n - i - 1)
				{
					if (j <= n + i - 1) cout << "*";
					else break;
				}
				else cout << " ";
			}
			else
			{
				if (j >= i - n + 1)
				{
					if (j <= 3 * n - i - 3) cout << "*";
					else break;
				}
				else cout << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}
