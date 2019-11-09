/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:12:05 by qufours           #+#    #+#             */
/*   Updated: 2019/11/07 22:36:07 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isset(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i1;
	int		i2;
	int		len;
	char	*tab;

	i1 = 0;
	while (s1[i1] && ft_isset(s1[i1], set) == 1)
		i1++;
	len = ft_strlen(s1) - 1;
	while (s1[len] && ft_isset(s1[len], set) == 1)
		len--;
	if (len < i1 && !(tab = (char*)malloc(sizeof(char))))
		return (NULL);
	if (len >= i1 && !(tab = (char*)malloc((len - i1 + 1) * sizeof(char))))
		return (NULL);
	i2 = 0;
	while (i1 + i2 <= len && len != i1)
	{
		tab[i2] = s1[i1 + i2];
		i2++;
	}
	tab[i2] = 0;
	return (tab);
}
