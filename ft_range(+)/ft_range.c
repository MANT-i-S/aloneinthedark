/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range(+).c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:59:24 by sholiak           #+#    #+#             */
/*   Updated: 2019/08/12 12:22:21 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *tab;
    int tmp;
    int count;
    int i;

    i = 0;
    tmp = 0;
    count = 2;
    tab = NULL;
    if (start == end)
    {
        tab = malloc(sizeof(int) * 1);
        tab[i] = start;
    }
    else if(start < end)
    {
        tmp = start;
        while(tmp != end)
        {
        tmp++;
        count++;
        }
        tab = malloc(sizeof(int) * count);
        while(start != end)
        {
        tab[i] = start;
        start++;
        i++;
        }
        tab[i] = start;
    }
    else if(start > end)
    {
        tmp = start;
        while(tmp != start)
        {
        tmp--;
        count++;
        }
        tab = malloc(sizeof(int) * count);
        while(end != start)
        {
        tab[i] = start;
        start--;
        i++;
        }
        tab[i] = start;
    }
    return(tab);
}