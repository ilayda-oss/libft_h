/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:38:28 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/23 18:47:06 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *temp;
	size_t i;

	temp = (char *)s1;
	while (*temp && ft_strchr(set, *temp))
		temp++;
	i = ft_strlen(temp);
	while (*temp && ft_strchr(set, temp[i - 1]))
		i--;
	return (ft_substr(temp, 0, i));
}

