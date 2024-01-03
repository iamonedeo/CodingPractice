#include <iostream>

using namespace std;

int main()
{
	int input;
	int dice[7];
	for (int i = 0; i < 7; i++)
		dice[i] = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		dice[input]++;
	}

	int max;
	for (int i = 1; i < 7; i++)
	{
		if (dice[i] == 1)
			max = i * 100;
		else if (dice[i] == 2)
		{
			max = 1000 + i * 100;
			break;
		}
		else if (dice[i] == 3)
		{
			max = 10000 + i * 1000;
				break;
		}
	}

	cout << max;

}
