/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:01:05 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/24 15:15:44 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
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
/* #include <stdio.h>
int main()
{
	char *a = "abcd";
	char *dup = ft_strdup(a);

	printf("%s", dup);
	free(dup);
} */
