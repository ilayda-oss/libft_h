/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:15:11 by suozkara          #+#    #+#             */
/*   Updated: 2024/11/11 18:29:51 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	word_count(const char *s, char c, size_t *size, size_t *i)
{
	size_t	j;

	j = 0;
	*size = 0;
	*i = 0;
	while (s[j])
	{
		if (j == 0 && s[j] != c)
			*size += 1;
		if (s[j] == c && s[j + 1] && s[j + 1] != c)
			*size += 1;
		j++;
	}
}

static void	il_free(char **str, size_t i)
{
	while (i >= 0 && str[i])
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	j;
	size_t	size;
	char	*temp;

	word_count(s, c, &size, &i);
	ret = malloc(sizeof(char *) * (size + 1));
	if (!ret)
		return (NULL);
	temp = (char *)s;
	while (i < size)
	{
		j = 0;
		while (*temp == c)
			temp++;
		while (temp[j] && temp[j] != c)
			j++;
		ret[i++] = ft_substr(temp, 0, j);
		if (!ret[i - 1])
			il_free(ret, i - 1);
		temp += j;
	}
	ret[i] = NULL;
	return (ret);
}
