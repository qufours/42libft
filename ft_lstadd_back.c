/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:21:45 by qufours           #+#    #+#             */
/*   Updated: 2019/11/08 16:26:08 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*curr;

	curr = alst;
	while (curr->next != NULL)
		curr = curr->next;
	if (!(curr->next = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	curr->next->content = new->content;
	curr->next->next = NULL;
}
