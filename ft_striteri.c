/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:46:34 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/19 16:53:09 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    i=0;
    while (*s)
    {
        (*f)(i, s);
        s++;
        i++;
    }
    
}