/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 23:04:25 by sudeilaydao       #+#    #+#             */
/*   Updated: 2024/10/16 23:17:00 by sudeilaydao      ###   ########.fr       */
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
    char str2[50] = "dinazorlar cok evrenli";
    printf("%d", memcmp(str1, str2, 3));
    printf("%d", ft_memcmp(str1, str2, 3));
}
