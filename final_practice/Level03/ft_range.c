//ft_abs // malloc (start-end + 1)
//int *tab, int i
//start - end
// tab[i] = start x 4
//start < end -> start++, i++
//start > end -> start--, i++


#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}