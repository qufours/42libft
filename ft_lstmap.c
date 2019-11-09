/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:52:17 by qufours           #+#    #+#             */
/*   Updated: 2019/11/08 17:01:42 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*curr;
	t_list	*new;

	curr = lst;
	if (!(new = (t_list**)malloc(ft_lstsize(lst) * sizeof(t_list))))
		return (NULL);
	while (curr->next != NULL)
	{
		new->content = (*f)(curr->content);
		new = new->next;
		curr = curr->next;
	}
	new->next = NULL;
	return (new);
}
