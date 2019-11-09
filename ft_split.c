/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:25:02 by qufours           #+#    #+#             */
/*   Updated: 2019/11/07 23:00:28 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *s, char c)
{
	int	count;
	int	i;
	int	flag;

	i = 0;
	count = 1;
	flag = 0;
	while (s[i])
	{
		if (s[i] == c && flag == 1)
		{
			count++;
			flag = 0;
		}
		if (s[i] != c)
			flag = 1;
		i++;
	}
	if (flag == 0)
		count--;
	return (count);
}

int		ft_countchar(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_zerocase(char const *s)
{
	int		i;
	char	**tab;

	if (!(tab = (char**)malloc(2 * sizeof(char *))))
		return (NULL);
	i = 0;
	if (!(tab[0] = (char*)malloc(ft_strlen(s) + 1 * sizeof(char))))
		return (NULL);
	while (s[i])
	{
		tab[0][i] = s[i];
		i++;
	}
	tab[0][i] = 0;
	tab[1] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		i1;
	int		i2;
	char	**tab;

	if (c == 0)
		return (ft_zerocase(s));
	if (!(tab = (char**)malloc(ft_countwords(s, c) * sizeof(char*))))
		return (NULL);
	i = 0;
	i1 = 0;
	while (s[i])
	{
		i2 = 0;
		if (!(tab[i1] = (char*)malloc(ft_countchar(&s[i1], c) * sizeof(char))))
			return (NULL);
		while (s[i] != c)
			tab[i1][i2++] = s[i++];
		while (s[i] == c)
			i++;
		if (i2 > 0)
			i1++;
	}
	tab[i1] = NULL;
	return (tab);
}
