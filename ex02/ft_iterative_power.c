
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	i = 1;
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

int	main(void)
{
	int i;
	i = ft_iterative_power(4, 4);
	printf("res = %d\n", i);
	return (0);
}
