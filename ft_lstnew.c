/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiisaac <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 16:09:03 by kiisaac           #+#    #+#             */
/*   Updated: 2018/06/12 19:20:02 by kiisaac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nw;

	nw = (t_list *)malloc(sizeof(t_list));
	if (nw == NULL)
		return (NULL);
	if (content == NULL)
	{
		nw->content = NULL;
		nw->content_size = 0;
	}
	else
	{
		nw->content = malloc(content_size);
		if (nw->content == NULL)
			return (NULL);
		ft_memcpy(nw->content, content, content_size);
		nw->content_size = content_size;
	}
	nw->next = NULL;
	return (nw);
}
