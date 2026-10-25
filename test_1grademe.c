#include <unistd.h>


int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
// test main 
int main(void)
{
	char t;
	int i;
	char c = '1';

	i = ft_isdigit(c);
	t = i + '0';
	write(1, &t, 1);
	return (0);
}
