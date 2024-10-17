/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:32:40 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:05:36 by suozkara         ###   ########.fr       */
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
int main()
{
	printf("%s",ft_memchr("ilay2da,", '2', 6));	
	printf("%p",ft_memchr("ilay2da,", '2', 6));	
	printf("%s",ft_memchr("ilay2da,", 'd', 6));	
	printf("%p",ft_memchr("ilay2da,", 'd', 6));	



}