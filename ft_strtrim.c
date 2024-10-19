/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sudeilaydaozkara <sudeilaydaozkara@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:38:28 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/19 12:28:29 by sudeilaydao      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char *temp;
	size_t i;

	temp = (char *)s1;
	while (ft_strchr(set, *temp))
		temp++;
	i = ft_strlen(temp);
	while (ft_strchr(set, temp[i - 1]))
		i--;
	return (ft_substr(temp, 0, i));
}

int main()
{
	char *s = "-1furkan-1";
	printf("%s\n", ft_strtrim(s, "-1"));
}
