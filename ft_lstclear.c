/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:31:44 by qufours           #+#    #+#             */
/*   Updated: 2019/11/11 22:07:20 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*tmp;

	curr = *lst;
	tmp = NULL;
	if (!*lst || !lst || !del)
		return ;
	while (curr)
	{
		if (curr->next)
			tmp = curr->next;
		else
			tmp = NULL;
		(*del)(curr->content);
		free(curr);
		curr = tmp;
	}
	(*lst) = NULL;
}
