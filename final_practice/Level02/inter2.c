#include <unistd.h>

int check_double (char *str, char c, int len)
{
    int i = 0;
    while (i < len)
    {
        if (str[i] == c)
            return(0);
        i++;
    }
    return (1);

}
void ft_inter (char *s1, char *s2)
{
    int i = 0;
    int j;

    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                if (check_double(s1, s1[i], i))
                {
                    write(1, &s1[i], 1);
                    break;
                }
            }
            j++;
        }

        i++;
    }

}

int main (int argc, char **argv)
{
    if (argc == 3)
    {
        ft_inter(argv[1], argv[2]);
    }
    write(1, "\n", 1);
    return (0);

}