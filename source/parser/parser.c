/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:11:11 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 12:43:38 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"
#include "../library/libft/libft.h"

char	*get_data_value(t_data data, char *field)
{
	int	i;

	i = 0;
	while (data.value[i][0])
	{
		if (!ft_strncmp(data.value[i], field, ft_strlen(field)))
			return ft_strdup(&data.value[i][ft_strlen(field) + 1]);
		i++;
	}
	return (NULL);
}

t_data	parser(char	*file)
{
	t_data	data;

	ft_memset(&data, 0, sizeof(data));
	data.value = ft_split(file, '\n');
	data = parse_directions(data);
	data = parse_floor_and_ceilling(data);
	data = parse_map(data);
	return data;
}