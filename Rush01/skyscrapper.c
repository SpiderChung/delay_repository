/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:21:32 by schung            #+#    #+#             */
/*   Updated: 2021/07/04 13:03:56 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

int	valid_solve(char 

int check_input(char *check)
{
	int	i;
	int	len;
	
	i = 0;
	len = 0;
	while(check[i] != '\0')
	{	
		if (check[i] <= '4' && check[i] >= '1')
			len++;
		i++;
	}
	return (len);
/*	if (i == 16)
		return (1);
	else 
		return (0);*/
}	

int main(int argc, char **argv)
{
	int	i;
	int len;
	int sky[4][4];	

	sky = check_input(argv[1]);
	if (i != 16)
		ft_putnbr(i);
	else 
		ft_putnbr(i);
	

}
