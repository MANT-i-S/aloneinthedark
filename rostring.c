/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 17:45:06 by sholiak           #+#    #+#             */
/*   Updated: 2019/06/17 20:27:52 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    int len = 0;
    char *dest;

    if (ac > 2)
    {
        dest = (char **)malloc(sizeof(dest) * ac);
        while ([j < ac])
        while (av[j][i] != '\0')
        {
            if (av[j][i] != ' ' && av[j][i] != '\t' && av[j][i] != '\n')
            {
                i++;
                len++;
            }
            if (av[j][i] == ' ' || av[j][i] == '\t' || av[j][i] == '\n')
            {
                i++;
                len++;
            }
            if ((av[j][i] == ' ' || av[j][i] == '\t' || av[j][i] == '\n') && (av[j][i - 1] == ' ' || av[j][i - 1] == '\t' || av[j][i - 1] == '\n'))
            {
                i++;
            }
        }
        dest = (char*)malloc(sizeof(dest) * len);
        j = 1;
        i = 0;
        while (av[j][i] != '\0')
        {
            if (av[j][i] != ' ' && av[j][i] != '\t' && av[j][i] != '\n')
            {
                av[j][i] = dest[j][i]
                i++;
            }
            if (av[j][i] == ' ' || av[j][i] == '\t' || av[j][i] == '\n')
            {
                i++;
                len++;
            }
            if ((av[j][i] == ' ' || av[j][i] == '\t' || av[j][i] == '\n') && (av[j][i - 1] == ' ' || av[j][i - 1] == '\t' || av[j][i - 1] == '\n'))
            {
                i++;
            }
        }
    }
}