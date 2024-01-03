#include <iostream>

using namespace std;

void Switch(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	int input[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> input[i];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (input[i] > input[j]) Switch(input[i], input[j]);
		}
		cout << input[i]<<" ";
	}

}
