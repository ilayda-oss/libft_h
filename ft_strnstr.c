/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:49:51 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 19:36:11 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t len_n;
	
	len_n = ft_strlen(needle);
	i = 0;
	if (len_n == 0)
		return (char *)haystack;
	if (len == 0 || (len < len_n))
		return (NULL);
	while (i <= len - len_n && i < ft_strlen(haystack))
	{
		if (ft_strncmp(&haystack[i], needle, len_n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}

	return NULL;
}