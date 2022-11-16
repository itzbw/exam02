#include <unistd.h>

void ft_putstr (char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void wd_match (char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int notfound = 0;

    while(s1[i])
    {
        while(s2[j])
        {
            if (s1[i] == s2[j])
                break;
            if(s2[j + 1] == '\0')
                notfound = 1;
            j++;
        }
       i++;
    }
    if (notfound == 0)
        ft_putstr(s1);
}

int main (int argc, char **argv)
{
    if(argc == 3)
    {
        wd_match(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return(0);
}