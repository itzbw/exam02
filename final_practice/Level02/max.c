#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    int max = 0;

    while (i < len)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}

//TEST//

int	main(void)
{
	int	arr[] = {1,3,14,8765,56,29,999};
	printf("%d\n", max(arr, 7));
	return (0);
}