/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:56:59 by suozkara          #+#    #+#             */
/*   Updated: 2024/11/08 15:40:08 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    t_list *new_node;
    
    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
        return NULL;
    new_node->content = content;
    
    new_node->next = NULL;
    return (new_node);
}
