#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void backword(int* input);

int main()
{
	int input1, input2;
	scanf("%d%d", &input1, &input2);

	backword(&input1);
	backword(&input2);

	printf("%d", (input1 > input2) ? input1 : input2);


	//scanf("%d%d", input1, input2);



	return 0;
}


void backword(int* input)
{
	int n100, n10, n1;

	n100 = *input / 100;
	n10 = (*input - n100 * 100) / 10;
	n1 = *input - n100 * 100 - n10 * 10;

	*input = n100 + n10 * 10 + n1 * 100;
}