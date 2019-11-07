#include <stdio.h>
#include <stdlib.h>

void	out(int calc)
{
	printf("%d\n", calc);
}

int		seul(int calc)
{
	return (0);	
}

int *change(int *lastquo)
{
	*lastquo = 2;
	return (lastquo);
}

int		main(int ac, char **av)
{
	int calc;
	int *lastquo;
	int *quo;
	int *num;
	int *orig;
	int	*tmp;
	int *evensum;

	lastquo = (int *)malloc(sizeof(int) * 1);
	*lastquo = 0;
	quo = (int *)malloc(sizeof(int) * 1);
	*quo = 0;
	num = (int *)malloc(sizeof(int) * 1);
	*num = 0;
	orig = (int *)malloc(sizeof(int) * 1);
	*orig = 0;
	tmp = (int *)malloc(sizeof(int) * 1);
	*tmp = 0;
	evensum = (int *)malloc(sizeof(int) * 1);
	*evensum = 0;

	if (ac != 2)
	{
		printf("Please enter param\n");
		return (0);
	}
	calc  = atoi(av[1]);
	*orig = calc;
	*tmp = calc;
	out(calc);
	calc--;
	if (!(calc))
		return (seul(calc));
	start(lastquo, quo, tmp, num, evensum);
	free(lastquo);
	free(quo);
	free(num);
	free(orig);
	free(tmp);
	return (0);
}
