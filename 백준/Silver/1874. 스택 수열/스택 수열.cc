#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	stack<int> stk;
	vector<char> ans;
	int n, num;
	cin >> n;

	stk.push(0);
	bool isPos = true;
	cin >> num;
	int j = 0;
	for (int i = 1; i <= n; i++)
	{
		stk.push(i);
		ans.push_back('+');
		if (stk.top() > num)
		{
			isPos = false;
			break;
		}

		while (stk.top() == num)
		{
			if (stk.empty())
			{
				isPos = false;
				break;
			}
			stk.pop();
			if (j < n-1)
			{
				cin >> num;
				j++;
			}
			ans.push_back('-');
		}
		if (stk.top() > num)
		{
			isPos = false;
			break;
		}
		if (!isPos) break;
	}

	if (isPos)
	{
		for (const auto& ele : ans)
			cout << ele << "\n";
	}
	else cout << "NO";


	return 0;
}