/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:39:52 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/17 18:06:22 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (power > 1)
	{
		return (nb *= (ft_recursive_power(nb, power - 1)));
	}
	return (nb);
}

/* #include <stdio.h>
int main()
{
	printf("%d", ft_recursive_power(1, 1));
} */