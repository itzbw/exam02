// str_cap
    //[i] A to Z ->toLower
    //[i] a to z && [i - 1] space / tab  -> toUpper
    //write
// i < argc -> str-cap , i++


#include <unistd.h>

void str_cap(char *str)
{
    int i = 0;
    if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
    i++;
    while (str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] +=32;
        if(str[i] >= 'a' && str[i] <= 'z' && str[i - 1]== ' ' || str[i - 1] == '\t')
            str[i] -=32;
        write(1, &str[i], 1);
        i++;
    }

}

int main (int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        str_cap(argv[i]);
        write(1, "\n", 1);
        i++;
    }
    return(0);
}
