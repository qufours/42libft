/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:31:44 by qufours           #+#    #+#             */
/*   Updated: 2019/11/08 16:46:14 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;

	curr = (*lst)->next;
	while (curr->next != NULL)
	{
		(*del)(curr->content);
		free(curr->content);
		curr = curr->next;
	}
	(*del)(curr->content);
	(*lst)->next = NULL;
}
