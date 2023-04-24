
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb < 0) 
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) 
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) 
	{
		ft_putchar(nb + 48);
	}
}


int	ft_iterative_factorial(int nb)
{
	int	j;

	if(nb < 0)
		nb = -nb;
	if (nb == 0 || nb == 1)
		return 1;
	if (nb > 1)
	{
		j = nb * ft_iterative_factorial(nb - 1);
	}
	return (j);
}

int	main(void)
{
	int	i;

	i = ft_iterative_factorial(-8);
	ft_putnbr(i);
	return (0);
}
