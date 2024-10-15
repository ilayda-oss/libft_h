/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:13:34 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/15 18:47:33 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void * ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr= (unsigned char *)b; // bunu olma sebebi *b void olarak acılmıs ama c unsigned char oldugu icin aynı tipte olmamlıalr
	
	c = (unsigned char)c; // unsigned chara döndürülmesi gerekiyor mande böyle yazıyor
	while (len>0)
	{
		*ptr = c;
		ptr++;
		len--;
	}
	return b;
}

int main (){

	char str[] = "koray";	
	int tab[] = {4,3,6,9};
	
	ft_memset(tab, -256, 1);
	
	printf("%d\n",tab[0]);
	printf("%d\n",tab[1]);
	printf("%d\n",tab[2]);
	printf("%d\n",tab[3]);

	
	
	
}