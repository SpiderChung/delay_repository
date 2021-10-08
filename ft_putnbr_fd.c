/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <schung@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:02:08 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 20:42:59 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	s;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(n * (-1), fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd); 
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		s = n % 10 + '0';
		write(fd, &s, 1) ;
	}
}
