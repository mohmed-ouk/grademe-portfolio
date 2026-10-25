#include <unistd.h>

void arrys1(int *arrys, int size, int *index1, int *index2)
{
    int h;
    int i;

    i = 0;
    while(size > i)
    {
        h = i + 1;
        while (h < size)
        {
            if(arrys[i] + arrys[h] == 9)
            {
                *index1 = i;
                *index2 = h;
                return;
            }
            h++;
        }
        i++;
    }
}

void putnbr(int nbr)
{
    char c;
    if (nbr < 10)
    {
        c = nbr + '0';
        write(1, &c, 1);
    }
    if (nbr > 9)
    {
        putnbr(nbr / 10);
        c = nbr % 10 + '0';
        write(1, &c, 1);
    }
}
int main(void)
{
    int index1 = 0;
    int index2 = 0;
    int arrys[] ={11,15,2,33,5,5,5,5,5,5,8,8,8,8,8,8,8,8,8,8,7,8,8,8,8,8};

     arrys1(arrys, 26, &index1, &index2);
     if (index1 == 0 && index2 == 0)
     {
         write(1, "NOW_RES", 7);
         return (0);
     }
     write(1, "[", 1);
     putnbr(index1);
     write(1, ",", 1);
     putnbr(index2);
     write(1, "]", 1);
     return(0);
}
