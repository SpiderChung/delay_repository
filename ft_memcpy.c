/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:35:22 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 18:35:25 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a1;
	char	*a2;

	i = 0;
	a1 = (char *)dst;
	a2 = (char *)src;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		a1[i] = a2[i];
		i++;
	}
	return (dst);
}
