#include <unistd.h>

int	main(int argc, char **argv)
{
    int c;
    int f;
	int i;
	int j;

	i = 0;
    f = 1;
	j = argc - 1;
	while (j >= f)
	{
		while (argv[f][i] != '\0')
		{
            if (argv[f][i] >= 'a' && argv[f][i] <= 'z')
            {
                c = argv[f][i] + 13;
                if (c > 'z')
                {
                    c -= 26;
                }
                write(1, &c, 1);
            }
            else if (argv[f][i] >= 'A' && argv[f][i] <= 'Z')
            {
                c = argv[f][i] + 13;
                if (c > 'Z')
                {
                    c -= 26;
                }
                write(1, &c, 1);
            }
            else
            {
                write(1, &argv[f][i], 1);
            }
			i++;
		}
		i = 0;
		f++;
	}
	return (0);
}
