/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:38:10 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/05 17:48:32 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	mostra(int n)
{
	int	prim;
	int	seg;

	if (n > 9)
	{
		prim = n / 10;
		seg = n % 10;
		ft_putchar(prim + 48);
		ft_putchar(seg + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			mostra(a);
			ft_putchar(' ');
			mostra(b);
			if (a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
