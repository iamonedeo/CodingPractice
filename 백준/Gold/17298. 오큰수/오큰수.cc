#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, num;
	cin >> n;
	int* ans = new int[n];
	stack<int> stk;
	stack<int> remain;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		ans[i] = -1;
		if (!stk.empty())
		{
			if (stk.top() < num)
			{
				while (!stk.empty()&&stk.top()<num)
				{
					stk.pop();
					ans[remain.top()] = num;
					remain.pop();
				}
			}
		}
		remain.push(i);
		stk.push(num);
	}

	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";

	delete[] ans;

	return 0;
}