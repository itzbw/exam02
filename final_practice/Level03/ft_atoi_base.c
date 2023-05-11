int is_valid (char c, int base)
{
    char hex [17] = "0123456789abcdef";
    char hex_m [17] = "0123456789ABCDEF";

    while (base--)
        if (hex[base] == c || hex_m[base] == c)
            return 1;

    return (0);
}


int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
         i++;
    if (str[i] == '-')
        {
            sign *= -1;
            i++;
        }
    while (is_valid (str[i], str_base))
    {
        result *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'F')
            result += str[i] - 55;
        else if (str[i] >= 'a' && str[i] <= 'f')
            result += str[i] - 87;
        i++;
    }
    return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		nb;
	if (ac >= 3)
	{
		nb = ft_atoi_base(av[1], atoi(av[2]));
		printf("%d\n", nb);
	}
	return (0);
}
