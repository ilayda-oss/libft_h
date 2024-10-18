/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:32:40 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:46:18 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char*)s;
	
	while (n > 0)
	{
		if(*ptr == (unsigned char)c)
		{
			return ptr;
		}
		ptr++;
		n--;
	}
	return NULL;
}
// girilen c ile ilk karsılasılan adresi verir
