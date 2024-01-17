#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n;
	string str;
	int ans = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		stack<char> stk;
		for (int j = 0; j < str.size(); j++)
		{
			if (stk.empty()) stk.push(str[j]);
			else
			{
				if (stk.top() != str[j]) stk.push(str[j]);
				else if (stk.top() == str[j]) stk.pop();
			}
		}
		if (stk.empty()) ans++;
	}

	cout << ans;

	return 0;
}