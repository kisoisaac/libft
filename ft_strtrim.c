/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiisaac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/12 22:34:58 by kiisaac           #+#    #+#             */
/*   Updated: 2018/06/12 22:35:01 by kiisaac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	int		l;

	if (!s)
		return (0);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	l = ft_strlen(s);
	while ((s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t') && l > 0)
		l--;
	if (!(r = (char *)malloc((l + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (i < l)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

