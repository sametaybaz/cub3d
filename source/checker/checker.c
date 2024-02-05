/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:58:11 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 14:26:56 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"

int	checker(t_data data)
{
	int	is_check;

	is_check = check_directions(data);
	if (is_check)
		is_check = check_floor_and_ceilling(data);
	return (is_check);
}
