/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:59:51 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 20:59:55 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	a = (char *)malloc(sizeof(char) * count);
	if (!a)
		return (NULL);
	ft_memset(a, 0, size * count);
	return (a);
}
