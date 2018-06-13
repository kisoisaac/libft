/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiisaac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 23:45:50 by kiisaac           #+#    #+#             */
/*   Updated: 2018/06/13 15:21:53 by kiisaac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		k;
	char				*str;

	if (!s)
		return (0);
	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	k = ft_strlen(s);
	while ((s[k] == ' ' || s[k] == '\t' || s[k] == '\n' || s[k] == '\0') &&
			k > 0)
		k--;
	if (!(str = (char *)malloc(sizeof(char) * (k - i + 1))))
		return (NULL);
	j = 0;
	while (i <= k)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
