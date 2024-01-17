#include <iostream>
#include <deque>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, ans, num;
	int oper;
	ans = 0;
	
	cin >> n;
	deque<int> dq;
	for (int i = 1; i <= n; i++)
		dq.push_back(i);

	cin >> oper;
	for (int i = 0; i < oper; i++)
	{
		cin >> num;
		if (dq.front() == num)
			dq.pop_front();
		else
		{
			deque<int> dq2 = dq;
			while (true)
			{
				dq.push_back(dq.front());
				dq.pop_front();

				dq2.push_front(dq2.back());
				dq2.pop_back();

				ans++;
				if (dq.front() == num)
				{
					dq.pop_front();
					break;
				}
				else if (dq2.front() == num)
				{
					dq2.pop_front();
					dq = dq2;
					break;
				}
			}
		}
	}

	cout << ans;

	return 0;
}