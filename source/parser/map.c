/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:42:27 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 13:53:26 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"
#include "../library/libft/libft.h"
#include <stdlib.h>

static t_point	get_map_start_point(t_data data)
{
	int		control;
	t_point	point;
	t_point	start;

	control = 0;
	ft_memset(&point, 0, sizeof(point));
	while (data.value[point.y])
	{
		start.y = point.y;
		start.x = point.x;
		while (data.value[point.y][point.x] == SPACE)
			point.x++;
		while (data.value[point.y][point.x] == WALL
				|| data.value[point.y][point.x] == ROAD)
			{
				point.x++;
				control = 1;
			}
		while (data.value[point.y][point.x] == SPACE)
			point.x++;
		if (data.value[point.y][point.x] == '\0' && control)
			return (start);
		point.y++;
	}
	start.x = -1;
	start.y = -1;
	return (start);
}

static	t_data	set_map_points(t_data data)
{
	int		wall;
	int		road;
	int		space;
	t_point	point;

	wall = 0;
	road = 0;
	space = 0;
	ft_memset(&point, 0, sizeof(point));
	while (data.map.value[point.y])
	{
		point.x = 0;
		while (data.map.value[point.y][point.x])
		{
			if (data.map.value[point.y][point.x] == WALL)
				data.map.walls[wall++] = point;
			if (data.map.value[point.y][point.x] == ROAD)
				data.map.roads[road++] = point;
			if (data.map.value[point.y][point.x] == SPACE)
				data.map.spaces[space++] = point;
			if (data.map.value[point.y][point.x] == CHAR_NORTH
			|| data.map.value[point.y][point.x] == CHAR_SOUTH
			|| data.map.value[point.y][point.x] == CHAR_EAST
			|| data.map.value[point.y][point.x] == CHAR_WEST)
				data.map.start = point;
			point.x++;
		}
		point.y++;
	}
	return (data);
}

static	t_data	set_map_value(t_data data)
{
	t_point	start;
	int		map_size;
	int		i;

	i = 0;
	map_size = 0;
	start = get_map_start_point(data);
	while (data.value[start.y + map_size])
		map_size++;
	if (start.x > -1 && start.y > -1)
	{
		data.map.value = (char **)malloc(sizeof(char *) * (map_size + 1));
		while (data.value[start.y])
		{
			data.map.value[i] = ft_strdup(data.value[start.y]);
			start.y++;
			i++;
		}
		data.map.value[i] = NULL;
	}
	return (data);
}

t_data	parse_map(t_data data)
{
	data = set_map_value(data);
	data.map.wall_count = count_char_in_matrix(data.map.value, WALL);
	data.map.road_count = count_char_in_matrix(data.map.value, ROAD);
	data.map.space_count = count_char_in_matrix(data.map.value, SPACE);
	data.map.walls = (t_point *)malloc(sizeof(t_point) * data.map.wall_count);
	data.map.roads = (t_point *)malloc(sizeof(t_point) * data.map.road_count);
	data.map.spaces = (t_point *)malloc(sizeof(t_point) * data.map.space_count);
	data = set_map_points(data);
	return (data);
}
