#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, v,input;
	int arr[202] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		input += 100;
		arr[input]++;
	}
	cin >> v;
	cout << arr[v+100];
}