/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:41:17 by schung            #+#    #+#             */
/*   Updated: 2021/10/07 12:47:55 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	len;
	char			*a;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while ((s1[start]) && (ft_strchr(set, s1[start])))
		start++;
	len = ft_strlen(s1);
	end = len - 1;
	while ((s1[end]) && (ft_strchr(set, s1[end])))
		end--;
	a = ft_substr(s1, start, end - start + 1);
	return (a);
}
