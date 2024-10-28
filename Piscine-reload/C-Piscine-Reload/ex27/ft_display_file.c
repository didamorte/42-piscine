/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogribe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:03:28 by diogribe          #+#    #+#             */
/*   Updated: 2024/10/17 18:11:51 by diogribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display(char *filetest)
{
	int		file;
	char	text;

	file = open(filetest, O_RDONLY);
	if (file == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (read(file, &text, 1) > 0)
	{
		write(1, &text, 1);
	}
	close(file);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (ac == 2)
	{
		ft_display(av[1]);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}
