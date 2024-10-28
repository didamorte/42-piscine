/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:37:55 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/24 15:21:37 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*i;
	int	x;

	x = 0;
	if (min >= max)
		return (NULL);
	i = malloc((max - min) * sizeof(int));
	while (min < max)
	{
		i[x] = min;
		min++;
		x++;
	}
	return (i);
}

/* #include <stdio.h>
int main()
{
	int min = 21;
	int max = 42;
	int *dup = ft_range(min, max);
	int i = 0;
	while(i <= max - min - 1)
	{
		printf("%d, ", dup[i]);
		i++;
	}
	free(dup);
} */