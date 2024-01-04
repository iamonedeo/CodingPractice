#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	cin >> n;

	for (int i = 0; i < 2 * n - 1; i++)
	{
		for (int j = 0; j < 2 * n - 1; j++)
		{
			if (i < n)
			{
				if (j >= i)
				{
					if (j <= 2 * n - 2 - i) cout << "*";
					else break;
				}
				else cout << " ";
			}
			else
			{
				if (j >= 2 * n - i - 2)
				{
					if (j <= i) cout << "*";
					else break;
				}
				else cout << " ";
			}
		}
		cout << "\n";
	}
}
