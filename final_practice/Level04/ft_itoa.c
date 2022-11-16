//num_len , int len, return (len)
    //if num < 0 num *= -1 ,len++
    //while num > 0  num /= 10 ,len++
//itoa 
    // int num
    // int num_len = num_len(num)
    // char *str = malloc (len + 1)
    //str[len--]='\0'
    // if num == 0 , str[0] 
    // ifnum < 0 
    //while num > 0, str[len] = (num % 10) + '0';

    #include <stdio.h>
#include <stdlib.h>

int num_len (int num)
{
    int len = 0;
    if (num < 0)
    {
        num *= -1;
        len++;
    }

    while (num > 0)
    {
        num /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    long num;
    int len;

    num = nbr;
    len = num_len(num);
    str = malloc (sizeof(char) * (len + 1));
    if (!str)
        return 0;
    str[len--] = '\0';
    if (num == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (num  < 0)
    {
        str[0] = '-';
        num *= -1;
    }
    while (num > 0)
    {
        str[len] = (num % 10) + '0';
        num /= 10;
        len--;
    }

    return (str);
}