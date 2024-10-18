/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:36:52 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 19:10:13 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n){
	size_t i;
	
	i = 0;
	while(*s1 != '\0' && *s1 != '\0' && i < n)
	{
		if(*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		i++;
	}
	if(i == n)
		return 0;

	return (unsigned char)*s1 - (unsigned char)*s2;
}