#include <iostream>

using namespace std;

void HanoiTop(int, int, int);
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	HanoiTop(1, 3, n);
}

void HanoiTop(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << '\n';
		return;
	}
	HanoiTop(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	HanoiTop(6 - a - b, b, n - 1);
}