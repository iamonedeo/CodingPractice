#include <iostream>
#include <stack>

using namespace std;
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, num;
	cin >> n;

	stack<int> stk;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num == 0)
		{
			stk.pop();
			continue;
		}
		stk.push(num);
	}
	
	int sum = 0;
	int quant = stk.size();
	for (int i = 0; i < quant; i++)
	{
		sum += stk.top();
		stk.pop();
	}
	cout << sum;

	return 0;
}