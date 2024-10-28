/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:07:13 by diogribe          #+#    #+#             */
/*   Updated: 2024/10/17 17:21:28 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 13)
		return (0);
	if (nb > 0)
	{
		return (nb *= ft_recursive_factorial(nb - 1));
	}
	return (1);
}

/* #include <stdio.h>
int main()
{
	printf("%d", ft_recursive_factorial(0));
} */