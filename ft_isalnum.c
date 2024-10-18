/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:03:37 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 19:02:23 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c){

if (ft_isdigit(c) || ft_isalpha(c))
	return 1;
return 0;
}
// 48&57 aralıgı 0-9 
//65&90 aralığı A-Z
//97&122 aralığı a-z
// bu fonksiyon isalpha ve ildigit birlesimidir