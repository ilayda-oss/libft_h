/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:09:59 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/19 18:05:19 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *  dst, const char *  src, size_t dstsize) // strlcat src yi dst sonuna ekler
{
	size_t dst_len;
	size_t i;

	i = 0;
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dst_len + dstsize);
}
// dstsize len of dst ilayda özkara
// src den en fazla dstsize - strlen(dst)-1 kadar ekler

// ilayda 6 karakter
// özkara 6 karakter
// ilaydaoz 8