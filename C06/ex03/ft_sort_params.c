#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
	write(1, "\n", 1);
}

void	ft_print_params(int a, char **b)
{
	int	h;

	h = 1;
	while (a > h)
	{
		ft_putstr(b[h]);
		h++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 1;
	while (argc > i)
	{
		k = i + 1;
		while (argc > k)
		{
			if (ft_strcmp(argv[k], argv[i]) < 0)
			{
				ft_swap(argv + k, argv + i);
			}
			k++;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
