
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 1)
		return (1); 
	else
		return (nb * ft_recursive_power(nb, power - 1));
}


int	main(void)
{
	int i;
	i = ft_recursive_power(4, 4);
	printf("res = %d\n", i);
	return (0);
}
