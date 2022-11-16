#include <unistd.h>

#include<stdio.h>
#include<stdlib.h>

int	    is_power_of_2(unsigned int n)
{
    int num = n;

    // filters out number that cannot
    // be devided by 2 to save computation power
    if (num % 2 != 0)
        return(0);

    // infinite loop
    while (1)
    {
        // each time we divide num by 2
        num = num / 2;

        // if next time num is divided by 2 it has decimal part..
        if (num % 2 != 0)
            return 0;

        // if num is the smallest power of 2
        if (num == 2)
            return 1;
    }
}


int	main(int ac, char **av)
{
	if (ac == 2)
    {
        printf("%s is power of 2 ?", av[1]);
        is_power_of_2(atoi(av[1])) ? printf("Yes\n") : printf("No\n");
        printf("the number is %d:\n", atoi(av[1]));
    }
    return (0);
}