/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 17:42:15 by sholiak           #+#    #+#             */
/*   Updated: 2019/06/01 18:20:13 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int i;
	unsigned int j;
	unsigned int outa;
	unsigned int outb;
	unsigned int limit;

	if (!a || !b)
		return (0);
	limit = a;
	if (a > b)
		limit = a;
	if (b > a)
		limit = b;
	i = 1;
	outa = 0;
	outb = 1;
	while (outa != outb)
	{
		if (i <= limit)
		{
			j = 1;
			outa = a * i;
			while (outa != outb && j <= limit)
			{
				outb = b * j;
				j++;
			}
			i++;
		}
	}
	return (outa);
}

#include <stdio.h>

int main(void)
{
	unsigned int a = 4444;
	unsigned int b = 4242;
	unsigned int out = 0;

	out = lcm(a, b);
	printf("%d\n", out);
	return (0);
}
	
