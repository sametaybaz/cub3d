/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:35:08 by akaniber          #+#    #+#             */
/*   Updated: 2024/01/29 16:40:42 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library/libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char	**data;

	data = ft_split("asdasdasdas\nsadasdasd\ndsadasdfas", '\n');
	printf("%s, %s, %s", data[0], data[1], data[2]);
	free(data[0]);
	free(data[1]);
	free(data[2]);
	free(data);
}