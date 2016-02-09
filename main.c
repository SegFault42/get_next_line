/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:19:31 by rabougue          #+#    #+#             */
/*   Updated: 2016/02/09 22:12:21 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

int	open_file(char *file)
{
	int		fd;
	int		j;
	char	*line;

	j = 1;
	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putendl("Impossible d'ouvrir le fichier!");
		return (-1);
	}
	while ((get_next_line(fd, &line)) == j)
		printf("%s\n", line);
	if (j == -1)
		printf("Erreur de lecture");
	return (fd);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		open_file(av[1]);
	else
	{
		ft_putendl("Erreur !");
		return (0);
	}
	return (0);
}
