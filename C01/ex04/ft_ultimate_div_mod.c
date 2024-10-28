/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:06:28 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/09 13:28:02 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a % *b;
	j = *a / *b;
	*a = j;
	*b = i;
}

// #include <stdio.h>

// int main()
// {
// 	int a = 42;
// 	int b = 10;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d%d\n", a, b);
// }