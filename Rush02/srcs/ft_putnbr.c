/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:58:09 by schung            #+#    #+#             */
/*   Updated: 2021/06/30 20:32:20 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	minus(int g)
{
	if (g == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		return (147483648);
	}
	else
	{
		write(1, "-", 1);
		return (g * -1);
	}
}

void	ft_putnbr(int nb)
{
	int		s_int;
	char	s_char;

	if (nb < 0)
		ft_putnbr(minus(nb));
	else if ((nb < 10) && (nb >= 0))
	{
		s_char = nb + '0';
		write(1, &s_char, 1);
	}
	else if (nb >= 10)
	{
		s_int = nb / 10;
		ft_putnbr(s_int);
		s_char = nb % 10 + '0';
		write(1, &s_char, 1);
	}
}
