/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:41:50 by schung            #+#    #+#             */
/*   Updated: 2021/10/05 14:26:08 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *src, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = src;
	while (len - i > 0)
	{
		a[i] = 0;
		i++;
	}
}
