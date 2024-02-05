/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_ceiling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:12:15 by akaniber          #+#    #+#             */
/*   Updated: 2024/01/29 16:42:10 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/libft/libft.h"
#include "../library/cub3d.h"
#include <stdlib.h>

t_data	parse_floor_and_ceilling(t_data data)
{
	char	*rgb_text;
	char	**rgb_array;

	rgb_text = get_data_value(data, FLOOR);
	rgb_array = ft_split(rgb_text, ',');
	data.floor.r = ft_atoi(rgb_array[0]);
	data.floor.g = ft_atoi(rgb_array[1]);
	data.floor.b = ft_atoi(rgb_array[2]);
	free(rgb_text);
	free(rgb_array[0]);
	free(rgb_array[1]);
	free(rgb_array[2]);
	free(rgb_array);
	rgb_text = get_data_value(data, CEILING);
	rgb_array = ft_split(rgb_text, ',');
	data.ceiling.r = ft_atoi(rgb_array[0]);
	data.ceiling.g = ft_atoi(rgb_array[1]);
	data.ceiling.b = ft_atoi(rgb_array[2]);
	free(rgb_text);
	free(rgb_array[0]);
	free(rgb_array[1]);
	free(rgb_array[2]);
	free(rgb_array);
	return (data);
}
