/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:19:59 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:07:52 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr1 = (unsigned char *)s1;
    unsigned char *ptr2 = (unsigned char *)s2;
    while (n > 0)
    {
        if (*ptr1 != *ptr2) // comparing values
        {
            return *ptr1 - *ptr2;
        }
        ptr1++; // move to the next byte address goes
        ptr2++;
        n--;
    }
    return 0;
}

int main()
{
    char str1[20] = "ilaydalalaal";
    char str2[50] = "inazorlar cok evrenli";
    printf("%d\n", memcmp(str1, str2, 1));
    printf("%d", ft_memcmp(str1, str2,1));
}