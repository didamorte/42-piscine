/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:47:51 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/05 17:56:59 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	prim;
	int	seg;

	if (nb > 9)
	{
		prim = nb / 10;
		seg = nb % 10;
		ft_putchar(prim + 48);
		ft_putchar(seg + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}
