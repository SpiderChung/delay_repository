/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:56:49 by schung            #+#    #+#             */
/*   Updated: 2021/10/05 15:42:26 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(void *arr1, void *arr2, size_t len)
{
	size_t	i;
	char	*a1;
	char	*a2;

	i = 0;
	a1 = (char *)arr1;
	a2 = (char *)arr2;
	while (len)
	{
		if (a1[i] != a2[i])
			return (a1[i] - a2[i]);
		i++;
		len--;
	}
	return (0);
}
