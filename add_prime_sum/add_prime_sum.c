#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	while (*str <= '0' && *str <= '9' && *str != '-')
	{
		str++;
	}
	if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}

#include <stdio.h>

int main(int ac, char **av)
{
	int num = 0;
	int temp;
	int otr;
	int n;
	int sum;
	int count;
	num = ft_atoi(av[1]);
	printf("%d\n", num);
	if (ac != 2 || num < 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = 2;
	temp = 1;
	sum = 2;
	otr = 1;
	while (n != num && temp != 0)
	{
		temp = num % n;
		count = 2;
		while (count != n)
		{
			otr = n % count;
			count++;
			if (otr != 0 && n == count)
			{
				sum = sum + count;
			}
		}
		n++;
	}
	if (n == num)
		printf("%d\n", num);
	printf("%d\n", sum);
}