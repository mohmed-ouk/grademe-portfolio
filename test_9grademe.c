#include <unistd.h>

int main(int argc, char **argv)
{
   int i;

   i = 0;
   if (argc == 1)
   {
       write(1, "wrong number of arguments\n", 26);
       return (0);
   }

   else if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
   {
       write(1, "\n", 1);
       return (0);
   }
   else if (argc == 4)
   {
       i = 0;
       while (argv[1][i] != '\0')
       {
           i++;
       }
       while (i >= 0 || (argv[1][i] != argv[2][0]))
       {
           i--;
       }
       argv[1][i] = argv[3][0];
       i = 0;
       while (argv[1][i] != '\0')
       {
           write(1, &argv[1][i], 1);
           i++;
       }
   }
   write(1, "\n", 1);
   return (0);
}
