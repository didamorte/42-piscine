/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:12:07 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/19 14:50:32 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*  #include <stdio.h>
 int main(int ac, char **av)
 {
 	char *t;
	(void)ac;
	char *a = av[1];
 	char *b = av[2];

 	t = ft_strcat(a, b);
 	printf("%s\n", a);
 }
 */