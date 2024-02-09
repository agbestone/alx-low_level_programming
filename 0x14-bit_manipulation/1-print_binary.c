#include "main.h"

void print_binary(unsigned long int n)
{
	int i = 0, count, k, tp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	tp = n;

	while (tp != 0)
	{
		i++;
		tp = tp >> 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		k = n >> count;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
