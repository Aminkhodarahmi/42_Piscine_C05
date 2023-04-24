
#include <stdio.h>

float	ft_sqrt(int nb)
{
	float	i;

	i = 0;
	while ((i * i) < nb)
	{
		i = i + 0.001;
	}
	return (i);
}

int	main(void)
{
	printf ("res = %f \n", ft_sqrt(10));
	return (0);
}
