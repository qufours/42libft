/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:53:17 by qufours           #+#    #+#             */
/*   Updated: 2019/11/06 17:04:03 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*ptrdst;
	char	*ptrsrc;

	ptrdst = (char *)dst;
	ptrsrc = (char *)src;
	i = 0;
	while (i < (int)n)
	{
		ptrdst[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
