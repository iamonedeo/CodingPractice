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
		for (int j = 0; j < n; j++)
		{
			if (j < i - 1) cout << " ";
			else cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
