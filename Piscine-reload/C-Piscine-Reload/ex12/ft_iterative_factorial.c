/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:04:44 by diogribe          #+#    #+#             */
/*   Updated: 2024/10/15 17:03:35 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	ft;

	ft = 1;
	if (nb < 0 || nb > 13)
		return (0);
	while (nb >= 1)
	{
		ft *= nb;
		nb--;
	}
	return (ft);
}

/* #include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(0));
} */
