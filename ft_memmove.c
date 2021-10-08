/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 21:14:09 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 21:27:08 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*a1;
	char	*a2;

	if (!dst && !src)
		return (NULL);
	a1 = (char *)dst;
	a2 = (char *)src;
	if (src < dst)
	{	
		i = len;
		while (i > 0)
		{
			i--;
			a1[i] = a2[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			a1[i] = a2[i];
			i++;
		}
	}
	return (dst);
}
