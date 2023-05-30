#include <iostream>
#include <string>

using namespace std;

int main()
{
	int check[8];
	int nextinput = 0;
	string answer;


	for (int i = 0; i < 8; i++)
	{
		cin >> check[i];
		cin.ignore();
	}

	for (int i = 0; i < 7; i++)
	{
		if (check[i + 1] - check[i] == 1)
			answer = "ascending";
		else if (check[i + 1] - check[i] == -1)
			answer = "descending";
		else
		{
			answer = "mixed";
			break;
		}
	}

	cout << answer;

	return 0;
}