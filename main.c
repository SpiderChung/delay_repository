/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 13:19:32 by schung            #+#    #+#             */
/*   Updated: 2021/10/08 20:40:43 by schung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
char pop(unsigned int i, char k)
{
	char p;
	
	p = i + k;
	return (p);
}	

int main(int argc, char **argv)
{
	int k;
	int l;
	int h;
	int y;
	char *pos;
	char a[100] = "aaaaaaaa";
	char t[] = "123456ksbdkfjbskjdvsljdnv\n sdfsdfsdfsdsdfsd\ndfsdfsdfsdf";
	char g[] = "1234563kjfj-0ksndg";
	char d[100] = "1111111111";
	char mem1[100] = "_1235672345890";
	char mem2[100] = "2345";
//	char mem3[100] = "1234567890";
//	char mem4[100] = "222222";
	char mem5[100] = "1234567890";
	char mem6[100] = "222222";
	char mem7[100] = "1234567890";
	char mem8[100] = "222222";
	char mem9[100] = "qweasdzxcrb";
	char sub[100] = "23121231212312312Funny da     y3123132ds12312311";
	char **yan;
	char *fg;
	l  = argc;
	k = ft_isalpha(argv[1][0]);
	l = ft_isdigit(argv[1][0]);

	
	printf("ft_isalpha = %d \n", k);
	printf("ft_isdigit = %d \n", l);
	printf("ft_isalnum = %d \n", ft_isalnum(argv[1][0]));
	printf("ft_isascii = %d \n", ft_isascii(argv[1][0]));
	printf("ft_strlen = %d \n", ft_strlen(argv[1]));
//	printf("ft_memset = %s \n", ft_memset(a, '3', 5));
	printf("ft_atoi = %d \n", ft_atoi("-99999999999998098092147483649"));
	printf("atoi = %d \n", atoi("-98092147483649"));
	ft_bzero(t, 3);
	printf("bzero = %s\n", &t[3]);
	printf("ft_memcmp = %d\n", ft_memcmp(a, g, 9));
	printf("ft_memcpy = %s \n", ft_memcpy(mem5, mem6, 5));
	printf("ft_memmove = %s \n", memmove(mem7, mem8, 100));
	printf("ft_memchr = %s \n", ft_memchr(mem9, '1', 10));
	printf("ft_strnstr = %s \n", ft_strnstr(mem1, mem2, 11));
	y = ft_strncmp("123454", "12345sdfsdf", 6);
	printf("ft_srtncmp = %d \n", y);
	h = strlcat(a, d, 0);
//	printf("ft_strlcpy = %d ==== %s \n", h, g);
	printf("ft_strlcat = %d ==== %s \n", h, a);
	printf("toupper =  %c \n", toupper(argv[1][0]));
	printf("tolowe =  %c \n", tolower(argv[1][0]));
	pos = ft_strdup(mem9);
    printf("ft_calloc = %s \n \n", pos);
	printf("ft_substr = %s \n \n", ft_substr(mem9, 3, 4));
	printf("ft_substrasda = %s \n \n", ft_substr(sub, 18, 12));
	printf("Ft_strjoin = %s \n \n", ft_strjoin(mem9, mem8));
	printf("ft_strtrim = %s \n \n", ft_strtrim(sub, "123"));
	yan = ft_split(sub, '1');
	printf("sub = %s \n", sub);
	printf("ft_split0 = %s \n", yan[0]);
	printf("ft_split1 = %s \n", yan[1]);
	printf("ft_split2 = %s \n", yan[2]);
	printf("ft_split3 = %s \n", yan[3]);
	printf("ft_split4 = %s \n", yan[4]);
	printf("ft_split5 = %s \n", yan[5]);
	printf("ft_split6 = %s \n", yan[6]);
	printf("ft_split7 = %s \n", yan[7]);
	printf("ft_split8 = %s \n", yan[8]);
	printf("ft_split9= %s \n", yan[9]);
	printf("ft_split10 = %s \n", yan[10]);
	printf("ft_split11 = %s \n", yan[11]);
	fg = ft_itoa(-2147483648);
	printf("adsda %s \n", fg);
	printf("asdas %c \n", fg[10]);
	ft_putnbr_fd(-2147483647, 1);


}

