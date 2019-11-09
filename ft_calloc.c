/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:07:11 by qufours           #+#    #+#             */
/*   Updated: 2019/11/08 14:51:03 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*tab;
	int		i;

	i = 0;
	tab = (void*)malloc(count * size);
	while (i < (int)count)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
