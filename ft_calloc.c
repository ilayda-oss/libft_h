/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:31:38 by suozkara          #+#    #+#             */
/*   Updated: 2024/11/11 14:22:35 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot;
	void	*ptr;

	tot = count * size;
	ptr = malloc(tot);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tot);
	return (ptr);
}
