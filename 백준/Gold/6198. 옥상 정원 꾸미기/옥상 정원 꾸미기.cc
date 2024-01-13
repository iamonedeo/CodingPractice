#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n, ht;
	cin >> n;
	stack<int> stk;
	
	long long sum = 0;
	while (0 < n)
	{
		cin >> ht;
		if (stk.empty()) stk.push(ht);
		else
		{
			while (!stk.empty()&& stk.top() <= ht)
			{
				stk.pop();
			}
			sum += stk.size();
			stk.push(ht);
		}

		n--;
	}
	cout << sum;

	return 0;
}