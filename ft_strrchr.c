/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:38 by suozkara          #+#    #+#             */
/*   Updated: 2024/11/11 14:19:04 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		chr;
	const char	*pointer;

	chr = (char)c;
	pointer = NULL;
	while (*s != '\0')
	{
		if (*s == chr)
			pointer = s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return ((char *)pointer);
}
