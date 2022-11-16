#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>




int	    is_power_of_2(unsigned int n)
{
    if (n <= 1)
        return(0);
    while( n % 2 == 0)
    {
        n = n/2;
        if (n = 1)
            return (1);
        return (0);
    }
}


//TEST//

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
