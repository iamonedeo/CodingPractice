#include <iostream>
#include <queue>


    using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> card;
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++)
        card.push(i);

	while (card.size() != 1)
	{
		card.pop();
		card.push(card.front());
		card.pop();
	}

    cout << card.front();

    return 0;
}