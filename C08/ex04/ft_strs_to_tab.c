/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:04:01 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/24 12:16:12 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*d;
	char	*c;
	int		i;

	i = ft_strlen(src);
	d = malloc((i + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	c = d;
	while (*src != '\0')
	{
		*c = *src;
		src++;
		c++;
	}
	*c = '\0';
	return (d);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
			return (NULL);
		i++;
	}
	array[i].str = 0;
	return (array);
}
/* 
#include <stdio.h>
int	main(void)
{
	int i = 0;
	char *strings[] = {"Hello", "world", "42", "Porto"};
	t_stock_str *stroke;

	stroke = ft_strs_to_tab(4, strings);

	while (stroke[i].str != 0)
	{
		printf("String: %s\n", stroke[i].str);
		printf("Length: %d\n", stroke[i].size);
		printf("Copy: %s\n\n", stroke[i].copy);
	}
	i = 0;
	while (i < 4)
	{
		free(stroke[i].copy);
		i++;
	}
	free(stroke);

	return (0);
} */