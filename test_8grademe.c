#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    while (a <= '9')
    {
        ft_putchar(a);
        b = '0';
        while (b <= '9')
        {
            ft_putchar(b);
            c = '0';
            while (c <= '9')
            {
                ft_putchar(c);
                d = '0';
                while (d <= '9')
                {
                    ft_putchar(d);
                    d++;
                }
                c++;
            }
            b++;
        }
        write(1, ", ", 2);
        a++;
    }
    write(1, "\n", 1);
    return (0);
}
