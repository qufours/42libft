/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:37:22 by qufours           #+#    #+#             */
/*   Updated: 2019/11/07 19:05:20 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*ptrdst;
	unsigned char	*ptrsrc;

	ptrdst = (unsigned char *)dst;
	ptrsrc = (unsigned char *)src;
	i = 0;
	while (i < (int)n)
	{
		ptrdst[i] = ptrsrc[i];
		if (ptrdst[i] == (unsigned char)c)
			return (&ptrdst[i + 1]);
		i++;
	}
	return (NULL);
}
