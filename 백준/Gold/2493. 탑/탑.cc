#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	//번째, 높이
	stack<pair<int, int>> stk;
	stack<pair<int, int>> temp;
	pair<int, int> tower;
	queue<int> ans;

	int n, ht;
	cin >> n;
	cin >> ht;
	stk.push(make_pair(1, ht));
	ans.push(0);
	for (int i = 1; i < n; i++)
	{
		cin >> ht;
		while (!stk.empty())
		{
			if (stk.top().second > ht)
			{
				ans.push(stk.top().first);
				break;
			}
			else stk.pop();
		}
		if (stk.empty()) ans.push(0);
		stk.push(make_pair(i+1, ht));
	}

	while(!ans.empty())
	{
		cout << ans.front() << " ";
		ans.pop();
	}


	return 0;
}