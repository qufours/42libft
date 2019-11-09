/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:18:24 by qufours           #+#    #+#             */
/*   Updated: 2019/11/07 21:50:36 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		pos;
	int		i;
	char	*ptr;

	ptr = (char *)haystack;
	pos = 0;
	if (needle[0] == 0)
		return (ptr);
	while (ptr[pos] && pos <= (int)len)
	{
		if (ptr[pos] == needle[0])
		{
			i = 0;
			while (ptr[pos + i] == needle[i] &&
				ptr[pos + i] && pos + i < (int)len)
			{
				if (needle[i + 1] == 0)
					return (&ptr[pos]);
				i++;
			}
		}
		pos++;
	}
	return (NULL);
}
