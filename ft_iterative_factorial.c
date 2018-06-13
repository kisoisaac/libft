/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorical.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiisaac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 18:02:10 by kiisaac           #+#    #+#             */
/*   Updated: 2018/06/07 01:20:30 by kiisaac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int	sum;

	sum = 1;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
		return (sum);
	while (nb > 1)
	{
		sum *= nb;
		nb--;
	}
	return (sum);
}
