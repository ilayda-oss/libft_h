/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:29:46 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 17:26:21 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strchr(const char *s, int c) 
 {
	char chr = (char)c; 
	
	while (*s != '\0') 
	{
		if ( *s == chr){
			return (char *)s;
		}
		s ++;
	}
	if( chr == '\0'){
		return (char *)s;
	}

	return NULL;
	
 }
 // karakter dizileri üstünde c nin ilk gectiigi yerin adresini döndürür verir.
 #include <stdio.h>
#include <string.h>

int main() {
    char *str = "Hello, World! 123";
    char *result = ft_strchr(str, 'W');

   for (int x = 0; x< 3; x++)
   {
		printf("%s\n",str);
		str += 1;
   }

    return 0;
}
