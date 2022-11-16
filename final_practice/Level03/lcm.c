// a / b == 0 -> return zero
// find lcm; a > b ? lcm
// whilr(true) a % i || ab % i == 0 -> return lcm // lcm++


unsigned int lcm (unsigned int a, unsigned int b)
{
    int lcm;
    if (a == 0 || b == 0)
        return(0);
    if (a > b)
        lcm = a;
    else
        lcm = b;
    while(1)
    {
        if(lcm % a == 0 && lcm  % b == 0)
            return(lcm);
        lcm++;
    }
}




#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
    if (argc == 3)
    {
        unsigned int a = atoi(argv[1]);
        unsigned int b = atoi(argv[2]);
        printf("%d", lcm(a,b));
    }
    printf("\n");
}