/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:07:59 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 12:31:22 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	res;
	char	*a;

	i = 0;
	a = (char *)src;
	len_dst = ft_strlen((char *)dst);
	len_src = ft_strlen((char *)src);
	if (dstsize < len_dst)
		res = dstsize + len_src;
	else
		res = len_dst + len_src;
	while (a[i] && (len_dst + 1 < dstsize))
	{	
		dst[len_dst] = a[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (res);
}	
