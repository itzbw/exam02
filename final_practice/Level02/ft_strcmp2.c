#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i =  0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    retrun (s1[i] -s2[i]);
}