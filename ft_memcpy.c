/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:07:23 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 17:13:57 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

  void * ft_memcpy(void * dst, const void * src, size_t n)
 {
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;

	while(n > 0){
		*d = *s;
		d++;
		s++;
		n--;
	}
	return dst;
}
// src yi dst icine kopyalar.