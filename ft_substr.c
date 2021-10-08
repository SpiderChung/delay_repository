/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:16:24 by schung            #+#    #+#             */
/*   Updated: 2021/10/07 12:45:07 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*a;
	char			*b;

	b = (char *)s;
	a = (char *)malloc(sizeof(s) * (len + 1));
	if (!a)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i++] = b[start++];
	}
	a[i] = '\0';
	return (a);
}
