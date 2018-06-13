/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiisaac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 23:28:59 by kiisaac           #+#    #+#             */
/*   Updated: 2018/05/22 00:30:34 by kiisaac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (1);
	else
		while (s1[i] == s2[i] && i < n)
		{
			if (!(s1[i] && s2[i]) || i == (n - 1))
			{
				return (1);
			}
			i++;
		}
	return (0);
}
