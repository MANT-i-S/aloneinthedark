/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sholiak <sholiak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 20:04:50 by sholiak           #+#    #+#             */
/*   Updated: 2019/06/22 14:07:28 by sholiak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strspn(const char *str, const char *part)
{
    int i = 0;
    int j = 0;
    int check = 0;

    while (str[i])
    {
        if (str[i] == part[j])
        {
            i++;
            check++;
            j++;
        }
        if (str[i] != part[j] && part[j] != '\0')
            j++;
        if (check == 0 && part[j] == '\0')
            return (i);
        if (part[j] == '\0' && check != 0)
        {
            j = 0;
            check = 0;
        }
    }
    return (i);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    int len = 0;
    int mylen = 0;
    len = strspn("hey how are you", "hey");
    mylen = ft_strspn("hey how are you", "hey");
    printf("strspn :%d\n", len);
    printf("My_strspn :%d\n", mylen);
}