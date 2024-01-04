#include <iostream>

using namespace std;

void Switch(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}
void ReverseOrder(int* cars, int _start, int _end)
{
	int quant = _end - _start;	
	if (quant % 2 == 0) quant /= 2;
	else quant = quant / 2 + 1;

	for (int i = 0; i < quant; i++)
	{
		Switch(cars[_start - 1 + i], cars[_end - 1 - i]);
	}
}


int main()
{
	int cars[20];
	int start, end;
	for (int i = 0; i < 20; i++)
	{
		cars[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		cin >> start >> end;
		ReverseOrder(cars, start, end);
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", cars[i]);
	}

}
