#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <time.h>


int main()
{
	int n;
	int m;
	int b_min=0;

	int min=0;
	int sum = 0;

	scanf("%d", &m); //최소값
	scanf("%d", &n); //최대값

	if (m <= 10000 && n <= 10000 && m <= n)
	{
		for (; m <= n; m++)
		{
			for (int i = 1; i <= m; i++)
			{
				if (i * i == m)
				{
					if (b_min == 0)
					{
						min = m;
						b_min = 1;
					}
					sum += m;
				}
			}
		}

		if (sum + min == 0) printf("%d", -1);
		else 	printf("%d\n%d", sum, min);
	}

	return 0;
}