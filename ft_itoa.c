/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:59 by sudeilaydao       #+#    #+#             */
/*   Updated: 2024/10/19 14:49:49 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int intlen(int n, int *sign)
{
    int i;

    i = 0;
    *sign = 1;
    if (n == -2147483648)
    {
        *sign = -1;
        return (11);
    }
    if (n < 0 && ++i)
    {
        n = -1 * n;
        *sign = -1;
    }
    if (n == 0)

        return (1);

    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int n)
{
    char *ret;
    int sign;
    int len;

    len = intlen(n, &sign);    
    if (n == -2147483648)  // Bu özel durumu direkt elle işliyoruz
        return ft_strdup("-2147483648");
    ret = malloc(sizeof(char) * (len + 1));
    if (ret == NULL)
        return NULL; 
    ret[len] ='\0';
    if (sign == -1)
    { 
        n = -n;
        ret[0] = '-';
    }
    while (len > 0 && ((sign == 1 && n >= 0)
        || (sign == -1 && n != 0)))
    {
        ret[--len] = (n % 10) + '0';
        n = n / 10; 
    }
    return ret;
}
