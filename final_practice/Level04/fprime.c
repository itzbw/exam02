// int i = 2, int num = atoi (str)
//while i <= num , i++
    //if num % i == 0, print i, 
        //if num != i , print *, num /= i, i--

#include <stdio.h>
#include <stdlib.h>

void fprime (char *str)
{
    int i = 2; // min prime
    int num;

    num = atoi(str); // str -> int
    if (num == 1)
    {
        printf("1");
        return;
    }
    while(i <= num) //
    {
        if (num % i == 0)
            {
                printf("%d", i);
                if (num != i)
                    printf("*");
                num /= i; //divided by i
                i--;
            }
        i++;
    }
}

int main (int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        fprime(argv[1]);
    }
    printf("\n");
}