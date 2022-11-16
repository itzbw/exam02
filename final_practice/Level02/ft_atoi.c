#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
        int i = 0;
        int res = 0;
        int sign = 1;

     
            while (str[i] <= 32 || str[i] == ' ')
                i++;
            while(str[i] == '+' || str[i] == '-')
            {
                if (str[i] == '-')
                    sign *= -1;
                i++;
            }
            while (str[i] >= '0' && str[i] <= '9')
            {
                res = res * 10 + str[i] - '0';
                i++;
            }

    return(res * sign);
}

int main()
{
	printf("Atoi: %d\n", atoi("    \n\n\v\f\r\t -5234AAAgreghrsth"));
	printf("ft_atoi: %d\n", ft_atoi("    \n\n\v\f\r\t -5234AAAgreghrsth"));
}
