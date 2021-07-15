//#include "rush_02.h"
int	ft_sz_array(char **arr)
{
	int	i;
	i = 0;
	while (arr[i] != NULL)
		i++;
	return (i);
}

char **ft_del_num(char **src)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_sz_array(src);
	while (i < len )
	{	
		while (src[i][j] <= ':')
			j++;
		ft_trim_str(src[i][j], src[i][0]);
		i++;
	}
	return(src);
}	

