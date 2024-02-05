/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:01:39 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 14:32:12 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"

int	check_directions(t_data data)
{
	return (file_exits(data.north)
		&& file_exits(data.south)
		&& file_exits(data.west)
		&& file_exits(data.east));
}
