#include "includes/push_swap.h"

int is_sorted(char *array)
{
	int	i;

	while(array[i])
	{
		if (array[i] > array[i + 1])
			return (-1);
		else
			i++;
	}
	return (0);
}

char sort_array(char *array)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	if (is_sorted(array) == 0)
		return (array);
	while (array[j])
		j++;
	while(i <= j)
	{
		if(array[i] > array[i + 1])
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			i++;	
		}
		if (i > j)
		{
			i = 0;
			j -= 1;
		}
	}
	return (array);
}

int	get_median(char *arr)
{
	int	i;	
	int	nb;
	char *c;
	i = 0;
	c = sort_array(arr);
	while(c[i])
		i++;
	i /= 2;
	nb = ft_atoi(c[i]);
	return (nb);
}
