/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:49:51 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/23 19:34:25 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;

	len_n = ft_strlen(needle);
	i = 0;
	if (len_n == 0)
		return ((char *)haystack);
	if (len == 0 || (len < len_n && (!haystack[0] || haystack[0])))
		return (NULL);
	while (i <= len - len_n && haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, len_n) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
