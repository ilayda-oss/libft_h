/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:21:30 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/23 20:44:01 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if(*lst != NULL)
    {
        new->next=*lst;
        *lst = new;
    }        
    else
        *lst = new;
}