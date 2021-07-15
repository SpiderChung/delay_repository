#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1 ;
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
