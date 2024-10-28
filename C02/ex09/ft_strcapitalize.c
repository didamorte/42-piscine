/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:01:10 by diogribe          #+#    #+#             */
/*   Updated: 2024/09/18 17:56:38 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i - 1] < 'a' || str[i - 1] > 'z')
			&& (str[i - 1] < 'A' || str[i - 1] > 'Z')
			&& (str[i - 1] < '0' || str[i - 1] > '9')
			&& str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/* #include <stdio.h>
int main()
{
	char a[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(a));
} */