// int i, j, found
// if(argv [1][i] == argv [2][j]) -> found++ break;
// argv[1][found] == '\0' -> write 1 else 0



#include <unistd.h>

int main (int argc,char **argv)
{
    int i = 0;
    int j = 0;
    int found = 0;

    if (argc == 3)
    {
        while (argv[1][i])
        {
            while (argv[2][j])
            {
                if(argv [1][i] == argv [2][j])
                {
                    found++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (argv[1][found] == '\0')
                write(1, "1", 1);
            else 
                write(1, "0", 1);

    }
    write(1, "\n", 1);
}