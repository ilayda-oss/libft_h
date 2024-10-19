/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:31:59 by sudeilaydao       #+#    #+#             */
/*   Updated: 2024/10/19 12:58:55 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
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
    ret = malloc(sizeof(char) * (len + 1));
    if (ret == NULL)
        return NULL;
    if (sign == -1)
        ret[0] = '-';
    while (len > 0)
    {
        n % 10;
        // -123
    }
}

int main()
{
    printf("%i\n", intlen(-2147483648));
}