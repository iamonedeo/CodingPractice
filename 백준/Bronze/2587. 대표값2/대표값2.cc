#include <iostream>

using namespace std;

void Switch(int& a, int& b)
{
	int c = b;
	b = a;
	a = c;
}

int main()
{
	int sum = 0;
	int input[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
		sum += input[i];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (input[i] > input[j])
				Switch(input[i],  input[j]);
		}
	}

	printf("%d\n%d", sum / 5, input[2]);

}
