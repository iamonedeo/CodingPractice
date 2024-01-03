#include <iostream>

using namespace std;

int main()
{
	int input;
	char ans[3];

	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		for (int j = 0; j < 4; j++)
		{
			cin >> input;
			count += input;
		}
		if (count == 0) ans[i] = 'D';
		else if (count == 1) ans[i] = 'C';
		else if (count == 2) ans[i] = 'B';
		else if (count == 3)ans[i] = 'A';
		else if (count == 4)ans[i] = 'E';
	}
	for (int i = 0; i < 3; i++)
		cout << ans[i] << endl;

}
