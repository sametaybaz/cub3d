/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:25:45 by akaniber          #+#    #+#             */
/*   Updated: 2024/01/29 14:37:16 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"
#include <stdlib.h>
#include <stdio.h>

int	error(int line, char *file, char *error, char *str)
{
	if (str)
		free(str);
	return printf("%s in %s on line %d Error\n", error, file, line);
}
