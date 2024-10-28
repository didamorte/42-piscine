/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:09:48 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/24 15:22:11 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		diff;
	int		i;
	int		*temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	temp = malloc(diff * sizeof(int));
	if (!temp)
	{
		*range = 0;
		return (-1);
	}
	*range = temp;
	i = 0;
	while (i < diff)
	{
		temp[i] = min + i;
		i++;
	}
	return (diff);
}

/* #include <stdio.h>
int main()
{
	int min = 21;
	int max = 42;
	int *arr;
	int size = ft_ultimate_range(&arr, min, max);
	int i = 0;
	while(i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
} */