//ft_atoi // result = (result*10) + str[i] - '0';
//ft_putnb
//is_prime 
    //i = 2 , i < nb, nb% i == 0 -> return 0 else return 1
//add_prime
    //i = 2, prime sum = 0
    //while i <= nb, if is_prime(i)-> prime_sum += i, i++;
    //return (prime_sum)
//main
    //ft_putnbr(ft_add_prime_sum(ft_atoi(av[1])));


int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);

}

int		ft_add_prime_sum(int nb)
{
	int i;
	int prime_sum;

	i = 2;
	prime_sum = 0;
	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (ft_is_prime(i))
			prime_sum += i;
		i++;
	}
	return (prime_sum);
}
