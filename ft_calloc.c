/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:31:38 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 17:29:26 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void *ft_calloc(size_t count, size_t size)
	{
		size_t tot = count * size;
		void * ptr = malloc(tot);
		if(ptr == NULL) // adress blogu ayrıldı mı kontorlü
		{
			return NULL;
		}
		ft_bzero(ptr, tot); // void pointer olan ve ayrılmıs olan adres blogunu 0 ile doldurduk..
		return ptr;
	}
	// count: tahsis edilmek istenen eleman sayısı
	// size: her elemanın boyutu bayt cinsinden
	// mallocta bu kısım direkt count*size olarak kullanılırdı.
