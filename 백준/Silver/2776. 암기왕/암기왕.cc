#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int* note1;
	int* note2;
	int quant1, quant2;
	int test;
		
	
	cin >> test;
	
	for (int k = 0; k < test; k++)
	{
		cin >> quant1;
		note1 = new int[quant1];
		for (int i = 0; i < quant1; i++)
		{
			cin >> note1[i];
		}
		sort(note1, note1 + quant1);

		cin >> quant2;
		note2 = new int[quant2];
		for (int i = 0; i < quant2; i++)
		{
			cin >> note2[i];
		}
		//sort(note2, note2 + quant2);

		int min, max, check;
		for (int i = 0; i < quant2; i++)
		{
			min = 0, max = quant1 - 1;
			while (1)
			{
				check = (min + max) / 2;
				if (note1[check] == note2[i])
				{
					cout << 1<<"\n";
					break;
				}
				else if (min >= max)
				{
					cout << 0<<"\n";
					break;
				}
				else if (note1[check] < note2[i]) min = check + 1;
				else max = check - 1;
			}

		}
	}
	return 0;
}