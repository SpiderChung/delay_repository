#include <ft.h>

void	ft_pustr(char *str)
{
	int	i;
	 i = 0;
	 while (str[i] != '\0')
		 i++;
	 write(1, str + i, i);
}


int	init_dict(char **src)
{
	open(
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		init_dict(*argv[1]);
	}

}
