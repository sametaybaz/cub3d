/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:14:09 by akaniber          #+#    #+#             */
/*   Updated: 2024/01/29 14:36:39 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"
#include "../library/libft/libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*reader(char *file)
{
	int		fd;
	int		status;
	int		i;
	char	*result;
	char	*map;

	i = 0;
	status = 1;
	result = NULL;
	fd = open(file, O_RDONLY);
	map = (char *)malloc(sizeof(char) * 2);
	if (fd == -1)
		exit(error(41, "source/reader/reader.c", "File could not be opened", map));
	while (status != 0)
	{
		status = read(fd, map, 1);
		map[1] = '\0';
		result = ft_strjoin(result, map);
		++i;
	}
	close(fd);
	free(map);
	return (result);
}
