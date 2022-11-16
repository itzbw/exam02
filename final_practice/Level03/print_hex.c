//atoi_positive // result = (result * 10) + str[i] - '0';
//hex_digit // write(1, &hex_digit[n%16], 1);
//main

#include <unistd.h>

int ft_atoi_positive (char*str)
{
    int i = 0;
    int result;

    while (str[i])
    {
        result = (result * 10) + str[i] - '0';
        i++;
    }

    return(result);
}

void print_hex (int n)
{
    char hex_digit [] = "0123456789abcdef";

    if(n >= 16)
        print_hex (n / 16);
    write(1, &hex_digit[n%16], 1);

}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi_positive (argv[1]));
	write(1, "\n", 1);
}