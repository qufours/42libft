/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:14:08 by qufours           #+#    #+#             */
/*   Updated: 2019/11/07 20:08:44 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*tab;

	if (!(tab = (char*)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char))))
		return (NULL);
	i1 = 0;
	while (s1[i1])
	{
		tab[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2])
	{
		tab[i1 + i2] = s2[i2];
		i2++;
	}
	tab[i1 + i2] = 0;
	return (tab);
}
