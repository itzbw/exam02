// rstr_cap
    //[i] A to Z ->toLower
    //[i] a to z && [i + 1] space / tab /end -> toUpper
    //write
// i < argc -> str-cap , i++


#include<unistd.h>

void rstr (char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if (str[i +1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t')
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i] -=32;
        }
            write (1, &str[i], 1);
        i++;
    }

}

int main (int argc, char **argv)
{
    int i = 1;
    if (i < argc)
    {
        while(argv[i])
        {
            rstr(argv[i]);
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}