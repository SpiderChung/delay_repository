#include <unistd.h>

int	ft_strcmp_dict(char *s1, char *s2)
{
	int	i;
	int	j;
	int	h;

	j = 0;
	h = 0;
	while (s1[j] != ':')
		j++;
	while (s2[h] != ':')
		h++;
	if (j != h)
		return (j - h);
	i = 0;
	while (s1[i] == s2[i])
		i++;
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

char	**ft_dict_sort(int argc, char **argv)
{
	int	i;
	int	k;

	i = 0;
	while (argc > i)
	{
		k = i + 1;
		while (argc > k)
		{
			if (ft_strcmp_dict(argv[i], argv[k]) > 0)
			{
				ft_swap(argv + k, argv + i);
			}
			k++;
		}
		i++;
	}
	return (argv);
}
