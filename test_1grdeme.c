#include <unistd.h>

int	isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int main(void)
{
	char t;
	int i;
	char c = '1';

	i = isdigit(c);
	t = i + '0';
	write(1, &t, 1);
	return (0);
}
