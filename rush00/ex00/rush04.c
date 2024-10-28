/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:11:08 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/08 15:48:00 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line(int n, char a, char b, char c)
{
	if (n >= 1)
		ft_putchar(a);
	while (n > 2)
	{
		ft_putchar(b);
		n--;
	}
	if (n == 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (y >= 1 && x >= 1)
		ft_line(x, 'A', 'B', 'C');
	y -= 2;
	while (y > 0)
	{
		ft_line(x, 'B', ' ', 'B');
		y--;
	}
	if (y == 0 && x >= 1)
		ft_line(x, 'C', 'B', 'C');
}
