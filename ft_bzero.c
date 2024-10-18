/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:55:11 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 17:04:34 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
 void	ft_bzero(void *s, size_t n) // bellek blogunu sıfırlamak amacıyla
 {
	unsigned char *ptr = (unsigned char*)s;
	
	while (n > 0)
	{
		*ptr = 0; // adresin değerini 0ladı
		ptr++; // adresi bir sonraki bellek adresine tasındı bir bayt
		n--;
	}
	
 }
 // n sıfırlanacak byte sayısı