#include <iostream>

using namespace std;

int main()
{
	unsigned long long a, b;
	cin >> a >> b;
	if (a > b)
	{
		int c = a;
		a = b;
		b = c;
	}

	int quant = b - a-1;
	if (quant < 0) cout << 0 << endl;
	else cout << quant << endl;

	for (int i = a + 1; i < b; i++)
	{
		printf("%d ", i);
	}

}
