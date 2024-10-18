/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:09:59 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:18:56 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *  dst, const char *  src, size_t dstsize) // strlcat src yi dst sonuna ekler
{
	size_t src_len = ft_strlen(src);
}
// dstsize len of dst
// src den en fazla dstsize - strlen(dst)-1 kadar ekler