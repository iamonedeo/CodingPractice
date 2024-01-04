#include <iostream>

using namespace std;

int main()
{
	int input[9];
	int sum=0;
	int hash[101];
	for (int i = 0; i < 100; i++)
		hash[i] = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> input[i];
		sum += input[i];
		hash[input[i]]++;
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (input[i] > input[j])
			{
				int a = input[i];
				input[i] = input[j];
				input[j] = a;
			}
		}
	}

	int gap = sum - 100;
	int noNum[2];
	for (int i = 0; i < 9; i++)
	{
		if (hash[gap - input[i]]==1)
		{
			noNum[0] = input[i];
			noNum[1] = gap - input[i];
			break;
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (input[i] == noNum[0] || input[i] == noNum[1]) continue;
		printf("%d\n", input[i]);
	}

}
