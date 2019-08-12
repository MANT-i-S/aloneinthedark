/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 16:47:54 by sholiak           #+#    #+#             */
/*   Updated: 2019/08/12 11:37:21 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
	char c;

	c = n + 48;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	write (1, &c, 1);
}

int ft_atoi(char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

int main(int ac, char **av)
{
	int i;
	int a;
	int b;

	i = 0;
	a = 0;
	b = 1;
	if (ac != 2)
		write(1, "\n", 1);
	if (ac == 2)
	{
		while (b <= 9)
		{
		a = ft_atoi(av[1]);
		ft_putnbr(b);
		write(1, " x ", 3);
		ft_putnbr(a);
		write(1, " = ", 3);
		ft_putnbr(a * b);
		write(1, "\n", 1);
		b++;
		}
	}
}
