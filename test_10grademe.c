#include <unistd.h>

int ft_atio(char *str1)
{
	int ret;
	int i;

	ret = 0;
	i = 0;
	while (str1[i] >= '0' && str1[i] <= '9')
	{
		ret = ret * 10 + (str1[i] - '0');
		i++;
	}
	return (ret);
}

void horizontal(int i)
{
	int k = 0;

	if (i <= 0)
	{
		return;
	}
	while (k < i)
	{
		if (k == 0 || k == i - 1)
		{
			write(1, "+", 1);
		}
		else
		{
			write(1, "-", 1);
		}
		k++;
	}
	write(1, "\n", 1);
}

void middle(int x, int y)
{
	int res;

	res = 0;
	while (res < y - 2)
	{
		int col = 0;
		while (col < x)
		{
			if (col == 0 || col == x - 1)
			{
				write(1, "|", 1);
			}
			else
			{
				write(1, " ", 1);
			}
			col++;
		}
		write(1, "\n", 1);
		res++;
	}
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = ft_atio(argv[1]);
	j = ft_atio(argv[2]);

	if (i <= 0 || j <= 0)
	{
		return(0);
	}
	if (j == 1)
	{
		horizontal(i);
		return (0);
	}

	horizontal(i);
	middle(i, j);
	horizontal(i);
	return (0);
}
