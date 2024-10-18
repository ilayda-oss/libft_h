/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:21:38 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:43:47 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c){
		char chr = (char)c;
		const char *pointer = NULL;
		while(*s != '\0'){
			if (*s == chr){
				pointer = s; // yerini aldı
			}
			s++;
		}
		if ( chr == '\0'){
			return (char *)s;
		}
		return (char *)pointer;
	 }