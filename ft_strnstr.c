/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:49:51 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 16:22:38 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <libft.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t len_n;
    len_n = ft_strlen(needle);

    if (len == 0)
    {
        return (char *)NULL;
    }
    if (len_n == 0)
    {
        return (char *)haystack;
    }
    while (i <= len - len_n && haystack[i] != '\0')
    {
        if (ft_strncmp(&haystack[i], needle, len_n) == 0)

            return ((char *)&haystack[i]);
        i++;
    }

    return NULL;
}