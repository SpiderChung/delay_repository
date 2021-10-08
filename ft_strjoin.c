/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:47:49 by schung            #+#    #+#             */
/*   Updated: 2021/10/07 11:19:29 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	len;
	unsigned int	i;
	unsigned int	k;

	k = ft_strlen(s1);
	len = k + ft_strlen(s2) + 1;
	res = (char *)malloc(sizeof(char *) * len);
	if (!res)
		return (NULL);
	i = 0;
	while (i < k)
	{
		res[i] = s1[i];
		i++;
	}
	k = 0;
	while (i < len)
	{
		res[i] = s2[k];
		i++;
	}
	res[i] = '\0';
	return (res);
}
