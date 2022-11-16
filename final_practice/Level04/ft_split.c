



 #include <stdlib.h>
 #include <stdio.h> 
char    **ft_split(char *str)

{
    int i = 0; // each arg
    int i2 = 0; // each word
    int i3; //   each character in the word
    char **tab;

    tab = malloc (sizeof(**tab) * 1000);
    if (!tab)
        return (0);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        if (str[i] > 32)
        {
            i3 = 0;
            tab[i2] = malloc(sizeof(*tab) * 1000);
            while (str[i] >32)
            { 
                    tab[i2][i3] = str[i];
                    i++;
                    i3++;
            }
            tab[i2][i3] = '\0'; // until end of the word
            i2++; // go to next word
        }
        else
            i++;
    }
    tab[i2] = 0;
    return(tab);
}
