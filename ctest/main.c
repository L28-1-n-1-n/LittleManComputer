#include <stdio.h>

int		main()
{
	int i;
	int num;
	
	i = 27;
	num = 27;
	while (i < 28)
	{
		printf("%d ,", i);
		num = i;
		while (num != 1)
		{
			if (!(num % 2)) // if even
				num = num / 2;
			else // if odd
				num = 3 * num + 1;
			if (num > 999)
			{
				printf("0\n");
				return (0);
			}
			printf("%d ,", num);
		}
		printf("\n");
		i++;
	}
	return (0);
}

/*
int		main()
{
	int i;
	int num;
	unsigned int overflow;
	
	i = 333;
	num = 333;
	overflow = 0;
	while (i < 1000)
	{
		printf("%d ,", i);
		num = i;
		while (num != 1)
		{
			if (!(num % 2)) // if even
				num = num / 2;
			else // if odd
				num = 3 * num + 1;
			printf("%d ,", num);
			if (num > 999)
				overflow = 1;
		}
		if (!(overflow))
			return (0);
		overflow = 0;
		printf("\n");
		i++;
	}
	return (0);
}
*/
