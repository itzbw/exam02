#include <unistd.h>


int main (int argc, char ** argv)
{
    int i = 0;
    char *lastWord;

    if(argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i]<= 32 && argv[1][i+1] > 32)
                lastWord = &argv[1][i+1];
            i++;
        }
        i = 0;
        while (lastWord && lastWord[i] > 32)
        {
            write(1, &lastWord[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);

}
