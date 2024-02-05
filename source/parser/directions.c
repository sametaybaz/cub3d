/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:47:29 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 12:42:53 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/libft/libft.h"
#include "../library/cub3d.h"

t_data	parse_directions(t_data data)
{
	data.north = ft_strtrim(get_data_value(data, NORTH), " ");
	data.south = ft_strtrim(get_data_value(data, SOUTH), " ");
	data.east = ft_strtrim(get_data_value(data, EAST), " ");
	data.west = ft_strtrim(get_data_value(data, WEST), " ");
	return (data);
}
