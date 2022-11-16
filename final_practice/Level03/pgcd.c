//HCF (int a, int b) , int i = 1;
//while int i < a and i < b // i++
    // if a % i && ab % i == 0 -> HCF = i


#include<stdio.h>
#include<stdlib.h>

void hcf (int a, int b)
{
    int hcf;
    int i = 1;

    while (i < a && i < b)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
        i++;
    }
    printf ("%d", hcf);
}

int main (int argc, char **argv)
{
    if(argc == 3)
    {
        hcf(atoi(argv[1]), atoi(argv[2]));
    }
    printf("\n");

}