/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:21:45 by qufours           #+#    #+#             */
/*   Updated: 2019/11/11 21:57:59 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*begin;

	if (alst && (*alst) && new)
	{
		begin = (*alst);
		while (begin->next != NULL)
			begin = begin->next;
		begin->next = new;
	}
	else
		(*alst) = new;
}
