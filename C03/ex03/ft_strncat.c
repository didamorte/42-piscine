/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:04:28 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/10 18:01:15 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && nb != 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	char *t;

// 	char b[20] = "hi there!";
// 	char a[20] = "arrhgjfhgfg";

// 	t = ft_strncat(a, b, 3);
// 	printf("%s\n", a);
// }