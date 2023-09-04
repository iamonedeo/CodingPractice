#include <iostream>
#include <queue>

#define MAX 1000000
int main()
{
	using namespace std;
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k=0;
	cin >> n>> k;
	cin.ignore();

	int* step = new int[MAX];
	for (int i = 0; i < MAX; i++) 	step[i] = -1;
	step[n] = 0;
	queue<int> dist;
	dist.push(n);
	int input[3];

	while (step[k] == -1)
	{
		int crnt = dist.front();
		dist.pop();
		input[0] = crnt + 1;
		input[1] = crnt - 1;
		input[2] = crnt * 2; //위치
		for (int i = 0; i < 3; i++)
		{
			if (input[i]<0 || input[i]>MAX) continue;
			if (step[input[i]] != -1) continue;
			dist.push(input[i]);
			step[input[i]] = step[crnt] + 1;
		}
	}
	cout << step[k];

	return 0;
}