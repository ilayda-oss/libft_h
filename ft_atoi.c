/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suozkara <suozkara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:32:51 by suozkara          #+#    #+#             */
/*   Updated: 2024/10/17 18:33:39 by suozkara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == 45)
		{
			sign *= -1;
		}
		i++;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = ft_sign(str);
	while (str[i])
	{
		if (str[i] == 32 || (9 <= str[i]
				&& str[i] <= 13) || str[i] == 43 || str[i] == 45)
			i++;
		else if (str[i] >= 48 && str[i] <= 57)
		{
			result *= 10;
			result += str[i] - 48;
			i++;
		}
		else
			return (result * sign);
	}
	return (result * sign);
}
