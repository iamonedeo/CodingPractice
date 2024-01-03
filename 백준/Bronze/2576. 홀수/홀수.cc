#include <iostream>

using namespace std;

int main()
{
		int input;
		int min = 101;
		int sum = 0;

		for (int i = 0; i < 7; i++)
		{
			cin >> input;
			if (input % 2 != 0)
			{
				sum += input;
				if (min > input)
					min = input;
			}
		}
		if (min == 101) cout << -1;
		else
		cout << sum << endl << min;
}
