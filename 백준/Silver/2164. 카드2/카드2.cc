#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;
	queue<int> card;

	for (int i = 1; i <= n; i++)
		card.push(i);

	int ans;
	while (!card.empty())
	{
		ans = card.front();
		card.pop();
		if (card.empty()) break;
		
		card.push(card.front());
		card.pop();
	}

	cout << ans;

	return 0;
}