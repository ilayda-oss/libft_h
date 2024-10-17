/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:13:34 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:33:01 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
#include  <string.h> 
void * ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = (unsigned char *)b; // bunu olma sebebi *b void olarak acılmıs ama c unsigned char oldugu icin aynı tipte olmamlıalr
	unsigned char ch = (unsigned char)c;
	  // unsigned chara döndürülmesi gerekiyor mande böyle yazıyor
	while (len>0)
	{
		*ptr =ch;
		ptr++;
		len--;
	}
	return b;
}
// len kadar c yi b nin içine set eder.
int main()
{
	printf("%s",memset("ilayda ben slm", '2', 3));

	printf("%s",ft_memset("ilayda ben slm", '2', 3));
}