#include <unistd.h>

void	ft_putchar(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putchar(*argv);
	return (0);
}
