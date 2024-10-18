/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:36:20 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/18 14:40:15 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;

    i = 0;
    if (!s)
        return NULL;
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    
    char  * new = (char *)malloc(len + 1);
    if(new == NULL)
            return NULL; 
   while (i < len && s[start + i] )
   {
        
        new[i] = s[start + i];
        i++;
   }
   new[i] = '\0';
   return new;
    
}