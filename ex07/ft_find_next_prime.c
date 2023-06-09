#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = nb;
	while (i < 2 * nb)
		{
			if (ft_is_prime(i))
				return (i);
			i++;
		}
	return (0);
}
int	main(void)
{
	printf ("res = %d\n", ft_find_next_prime(589));
	return (0);
}
