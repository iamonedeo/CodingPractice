#include <iostream>

using namespace std;

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int input;
	int maxIndex=0;
	int maxNum=0;
	
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		if (input > maxNum)
		{
			maxNum = input;
			maxIndex = i + 1;
		}
	}
	cout << maxNum << "\n" << maxIndex;
}
