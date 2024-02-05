/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:13:09 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 13:34:17 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"
#include "../library/libft/libft.h"

int	count_char_in_matrix(char **str, char c)
{
	t_point	point;
	int	result;

	ft_memset(&point, 0, sizeof(point));
	result = 0;
	while (str[point.y])
	{
		point.x = 0;
		while (str[point.y][point.x])
		{
			if (str[point.y][point.x] == c)
				result++;
			point.x++;
		}
		point.y++;
	}
	return (result);
}
