#include <unistd.h>

int *ft_union (char *str, int *arr)
{
    int i = 0;
    while(str[i])
    {
        if(arr[(int)str[i]] != 1)
            write(1, &str[i], 1);
            arr[(int)str[i]] = 1;
        i++;
    }
    return (arr);
}

int main (int argc, char **argv)
{
    int i [260];

    if (argc == 3)
    {
        ft_union(argv[1], i);
        ft_union(argv[2], i);
    }
    write(1, "\n", 1);
    return (0);
}