#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    argc -= 1;
    while (argc >= 1)
    {
        while (argv[argc][i] != '\0')
        {   
            write(1, &argv[argc][i], 1);
            i++;
        }
        write(1, "\n", 1);
        i = 0;
        argc--;
    }
    return (0);
}
