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


#include <unistd.h>

void putnbr (int nb)
{
    int num = nb;
    char str[] = "0123456789";

    if (num > 9)
        putnbr (num / 10);
    write(1, &str[num%10], 1);
}

int ft_atoi (char *str)
{
    int i = 0;
    int result = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;

    while (str[i])
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
     
    return (result);
}


int isPrime (int nb)
{
    int i = 2;
    int num = nb;

    while(num > i)
    {
        if (num % i == 0 )
            return 0;
        i++;
    }
    return 1;
}

int add_prime (int nb)
{
    int i = 2;
    int sum = 0;

    if (nb <= 0)
        return 0;

    while (nb >= i)
    {
        if(isPrime (i))
            sum = sum + i;
        i++;
    }
    return sum;
}


int main (int argc, char** argv)
{
    int sum;

    if (argc == 2)
    {
        sum = add_prime(ft_atoi(argv[1]));
        putnbr(sum);

    }
    else
        write(1, "0", 1);
    write (1, "\n", 1);
}
