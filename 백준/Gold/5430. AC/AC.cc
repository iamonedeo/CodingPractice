#include <iostream>
#include <deque>
#include <queue>
#include <string>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	queue<pair<deque<int>, bool>> ans;

	int n, count;
	bool isReverse = false;
	cin >> n;

	string oper, nums;
	for (int i = 0; i < n; i++)
	{
		cin >> oper;
		cin >> count;
		cin >> nums;
		deque<int> dq;
		int in = 0;
		for (int j = 0; j < nums.size(); j++)
		{
			if (nums[j] < '0' || nums[j] > '9') continue;
			in += nums[j] - '0';
			if (nums[j + 1] >= '0' && nums[j+1] <= '9')
				in *= 10;
			else
			{
				dq.push_back(in);
				in = 0;
			}
		}
		for (int j = 0; j < oper.size(); j++)
		{
			if (oper[j] == 'R') isReverse = !isReverse;
			else
			{
				if (dq.empty())
				{
					dq.push_front(-1);
					break;
				}
				else if (!isReverse) dq.pop_front();
				else dq.pop_back();
			}
		}
		ans.push(make_pair(dq, isReverse));

		isReverse = false;
	}

	for (int i = 0; i < n; i++)
	{
		deque<int> dq = ans.front().first;
		bool isRev = ans.front().second;
		if (dq.empty()) cout << "[]\n";
		else if (dq.front() == -1) cout << "error\n";
		else
		{
			cout << "[";
			while (true)
			{
				if (!isRev)
				{
					cout << dq.front();
					dq.pop_front();
				}
				else
				{
					cout << dq.back();
					dq.pop_back();
				}

				if (dq.empty())
				{
					cout << "]\n";
					break;
				}
				else cout << ",";
			}
		}
		ans.pop();
	}



	return 0;
}