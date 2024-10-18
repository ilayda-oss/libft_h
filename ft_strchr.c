/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:29:46 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:45:00 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strchr(const char *s, int c) 
 {
	char chr = (char)c; 
	
	while (*s != '\0') 
	{
		if ( *s == chr){
			return (char *)s;
		}
		s ++;
	}
	if( chr == '\0'){
		return (char *)s;
	}

	return NULL;
	
 }
