/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floor_ceiling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:19:30 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 14:22:45 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"

int	check_floor_and_ceilling(t_data data)
{
	return (data.floor.r >= 0 && data.floor.r <= 255
	&& data.floor.g >= 0 && data.floor.g <= 255
	&& data.floor.b >= 0 && data.floor.b <= 255
	&& data.ceiling.r >= 0 && data.ceiling.r <= 255
	&& data.ceiling.g >= 0 && data.ceiling.g <= 255
	&& data.ceiling.b >= 0 && data.ceiling.b <= 255);
}
