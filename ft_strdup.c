/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:43:37 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/18 20:21:55 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char    *ft_strdup(const char *s1)
	{
		size_t  len = ft_strlen(s1);
		char    *ptr; // \0 yu de hesaba kattık cünkü burdaki baz aldıgımız strlendi (\0 hesaplamadan eleman sayısı geldi.)
		size_t  i=0;

		ptr = (char *)malloc(len + 1);
		if (ptr == NULL)
			return NULL; // malloc basarılı oldu mu
		while(s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
		ptr[i] = '\0';
		return ptr;    
	}
