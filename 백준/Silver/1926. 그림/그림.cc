#include <iostream>
#include <utility>
#include <queue>

int main()
{
	using namespace std;
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	/*
	input
	1. 도화지 세로(y)
	2. 도화지 가로 (x)
	3. 그림정보 1, 0 
	*/
	bool check[505][505]{};
	
	int count = 0;
	int nx[4] = { 1,0,-1,0 };
	int ny[4] = { 0,1,0,-1 };
	int boardX, boardY;
	cin >> boardY >> boardX;

	int** board;
	board = new int*[boardY];
	for (int i = 0; i < boardY; i++)
		board[i] = new int[boardX] {};
	for (int i = 0; i < boardY; i++)
	{
		for (int j = 0; j < boardX; j++)
		{
			cin >> board[i][j];
		}
	}

	queue<pair<int, int>> que;
	pair<int, int> current;
	int size;
	int max = 0;
	for (int n = 0; n < boardY; n++)
	{
		for (int m = 0; m < boardX; m++)
		{
			if (board[n][m] == 0 || check[n][m] == true) continue;
			size = 1;
			que.push({ n, m });
			check[n][m] = true;
			while (!que.empty())
			{
				current = que.front(); que.pop();
				for (int i = 0; i < 4; i++)
				{
					int cy = current.first + nx[i];
					int cx = current.second + ny[i];
					if (cx < 0 || cy < 0 || cx >= boardX || cy >= boardY) continue;
					if (board[cy][cx] == 0 || check[cy][cx] == true) continue;
					check[cy][cx] = true;
					size++;
					que.push({ cy,cx });
				}
				int a = 0;
			}
			count++;
			if (max < size)
				max = size;
		}
	}
	cout << count << '\n' << max;
	
	for (int i = 0; i < boardY; i++)
		delete board[i];
	delete board;

	return 0;
}