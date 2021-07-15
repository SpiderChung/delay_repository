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
	if (s1[i] == ':' || s2[i] == ':')
	{
		if (s1[i] == ':')
			return (-1);
		else
			return (1);
	}
	if (s1[i + 1] != ':' && s2[i + 1] != ':')
		return (s1[i] - s2[i]);
	else if (s1[i + 1] == s2[i + 1])
		return (s1[i] - s2[i]);
	else if (s1[i + 1] == ':')
		return (-1);
	else
		return (1);
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

	h = 0;
	while (a > h)
	{
		ft_putstr(b[h]);
		h++;
	}
}

int	sort_dict(int argc, char **argv)
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
	ft_print_params(argc, argv);
	return (0);
}

int	main(void)
{
	char *arr[24] = {"1000000000:billion", "14:fourteen", "17:seventeen", "100:hundred", "1000:thousand", "9:nine", "8:eight", "7:seven", "1:one", "2:two", "6:six", "90:ninety",
	   	"5:five", "11:eleven", "15:fifteen", "0:zero", "1000000:million", "12:twelve", "13:thirteen", "20:twenty", "30:thirty", "40:forty", "50:fifty", "60:sixty"};

	sort_dict(24, arr);
	return (0);
}
