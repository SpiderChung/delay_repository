/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:00:51 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 13:42:37 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	free_lines(char **src, int size)
{
	while (size != 0)
	{
		free(src[size]);
		size--;
	}
	return (0);
}

int	counter_line(char const *src, char c)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (!((src[i + 1] == c) || src[i + 1] == '\0') && src[i] == c)
			len++;
		i++;
	}
	return (len);
}

int	write_lines(char **dest, char const *src, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	len = 0;
	j = 0;
	while (src[i] != '\0')
	{	
		if ((src[i] == c) && ((src[i + 1] != c) || src[i + 1] != '\0'))
		{
			i++;
			dest[j] = ft_substr(src, i - len - 1, len);
			if (!dest[j])
				return (free_lines(dest, j));
			j++;
			len = 0;
		}
		len++;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	len;
	char			**res;

	len = counter_line(s, c);
	res = (char **)malloc(sizeof(char *) * (counter_line(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (write_lines(res, s, c) == 0)
		return (NULL);
	res[len] = 0;
	return (res);
}
