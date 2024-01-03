#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	char b;
	if (a < 60) b = 'F';
	else if (a < 70) b = 'D';
	else if (a < 80) b = 'C';
	else if (a < 90) b = 'B';
	else b = 'A';
	cout << b;
}