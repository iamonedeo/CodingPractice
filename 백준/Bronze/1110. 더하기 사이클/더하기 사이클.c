#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <time.h>


int main()
{
	int input;
	int num1;
	int num2;
	int sum;
	int newinput;
	int count = 0;

	scanf("%d", &input);
	newinput = input;

	while (1)
	 {
		if (newinput < 10)
		{
			num1 = 0;
			num2 = newinput;
		}
		else
		{
			num1 = newinput / 10; //10의자리
			num2 = newinput%10; //1의자리
		}
		count++;

		sum = num1 + num2;
		newinput = num2 * 10 + sum % 10;
		if (newinput == input) break;
	 }

	printf("%d", count);
}
