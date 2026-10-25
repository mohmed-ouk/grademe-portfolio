#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2 || argc == 1)
	{
		if (argc == 1)
		{
			while (argv[0][i] != '\0')
			{
				if (argv[0][i] == 'e')
				{
					write(1, "e\n", 2);
					return(0);
				}
				i++;
			}
		}
		if (argc == 2)
		{
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == 'e')
				{
					write(1, "e\n", 2);
					return(0);
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}
