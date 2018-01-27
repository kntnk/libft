/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktanaka <ktanaka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 14:16:11 by ktanaka           #+#    #+#             */
/*   Updated: 2018/01/26 14:19:58 by ktanaka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*next_list;

	list = *alst;
	while (list != NULL)
	{
		next_list = list->next;
		del(list->content, list->content_size);
		free(list);
		list = next_list;
	}
	*alst = NULL;
}
