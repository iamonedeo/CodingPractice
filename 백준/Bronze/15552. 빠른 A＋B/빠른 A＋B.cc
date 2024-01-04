#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int quant, a, b;
	cin >> quant;
	int* ans = new int[quant];
	for (int i = 0; i < quant; i++)
	{
		cin >> a >> b;
		ans[i] = a + b;
	}
	for (int i = 0; i < quant; i++)
	{
		cout << ans[i] << "\n";
	}

	delete ans;

	return 0;
}
