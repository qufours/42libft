/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qufours <qufours@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:50:26 by qufours           #+#    #+#             */
/*   Updated: 2019/11/06 16:55:44 by qufours          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < (int)n)
	{
		ptr[i] = 0;
		i++;
	}
}
