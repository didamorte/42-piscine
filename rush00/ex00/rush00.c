/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:32:09 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/08 15:49:31 by diogribe         ###   ########.fr       */
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
		ft_line(x, 'o', '-', 'o');
	y -= 2;
	while (y > 0)
	{
		ft_line(x, '|', ' ', '|');
		y--;
	}
	if (y >= 2 && x >= 1)
		ft_line(x, 'o', '-', 'o');
}
