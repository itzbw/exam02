#include <unistd.h>

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    char *dest;

    dest = malloc(sizeof(ft_strlen(src) + 1));
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}