/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:14:29 by qufours           #+#    #+#             */
/*   Updated: 2019/11/07 21:25:50 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	pos = -1;
	if ((char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (ptr[i])
	{
		if (ptr[i] == c)
			pos = i;
		i++;
	}
	if (pos == -1)
		return (NULL);
	return (&ptr[pos]);
}
