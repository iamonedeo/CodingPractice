#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int array[10] = {};
	int n;
	cin >> n;
	while (n > 0)
	{
		array[n % 10]++;
		n /= 10;
	}

	array[6] += array[9];
	array[9] = 0;
	if (array[6] % 2 == 0) array[6] /= 2;
	else array[6] = array[6] / 2 + 1;

	int max=0;
	for (int i = 0; i < 10; i++)
	{
		if (array[i] > max) max = array[i];
	}
	cout << max;
}
