/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:58:57 by qufours           #+#    #+#             */
/*   Updated: 2019/11/06 14:44:08 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_countnum(int n)
{
	int	count;

	count = 1;
	if (n == 0)
		count++;
	while (n / 10 != 0 || n % 10 != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_num(char *res, unsigned int n, int i)
{
	if (n < 10)
		res[i] = n + 48;
	if (n >= 10)
	{
		ft_num(res, n / 10, i - 1);
		res[i] = n % 10 + 48;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	num;
	char			*res;

	num = n;
	if (n < 0)
		num = -num;
	i = ft_countnum(num);
	if (n < 0)
		i++;
	if (!(res = (char*)malloc(i * sizeof(char))))
		return (NULL);
	res = ft_num(res, num, i - 2);
	if (n < 0)
		res[0] = '-';
	res[i - 1] = 0;
	return (res);
}
