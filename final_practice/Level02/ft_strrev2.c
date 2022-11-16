#include <stdio.h>
#include <unistd.h>


int ft_strlen (char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int len;
    char temp;

    len = ft_strlen(str) - 1;
    while ( i < len)
    {
        temp = str[i];
        str[i] = str[len];
        str[len]= temp;
        i++;
        len--;
    }
    
    return (str);

}


int main (void)
{
    char arr[] = "TESTING";
    ft_strrev(arr);
    printf("%s", arr);

}