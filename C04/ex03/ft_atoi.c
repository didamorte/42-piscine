/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:04:31 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/20 13:32:02 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	if (! (i % 2))
		return (nbr);
	return (-nbr);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "  ---+--+1234ab567";
	printf("%d", ft_atoi(a));
}*/
