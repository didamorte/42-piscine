/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:49:37 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/12 17:47:58 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	n -= 1;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include<stdio.h>
// int main()
// {
// 	char a[] = "Hello";
// 	char b[] = "Hellz";
// 	printf("%d", ft_strncmp(a, b, 4));
// }
