//ft_atoi
//space , '-' parsing
//result *= str_base;
// 0 to 9 //result += str[i] - '0';
// A to Z // result += str[i] - 55;
// a to z // result += str[i] - 87;



int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
         i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-' )
        {
            sign *= -1;
            i++;
        }
    }
    while (str[i])
    {
        result *= str_base;
        if (str[i] >= '0' && str[i] <= '9')
            result += str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'Z')
            result += str[i] - 55;
        else if (str[i] >= 'a' && str[i] <= 'z')
            result += str[i] - 87;
        i++;
    }
    return (result * sign);
}

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