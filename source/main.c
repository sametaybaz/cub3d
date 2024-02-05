/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaniber <akaniber@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:14:13 by akaniber          #+#    #+#             */
/*   Updated: 2024/02/03 14:16:14 by akaniber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/cub3d.h"
#include "../library/libft/libft.h"
#include "../library/minilibx/mlx.h"

#include <stdio.h>
#include <stdlib.h>

void mlx_funcs(t_data *data)
{
    mlx_hook(data->mlx.window, 2, 1L, event_key, data);
    mlx_hook(data->mlx.window, 17, 0, close_prog, data);
    mlx_do_sync(data->mlx.init);
    mlx_loop(data->mlx.init);
}

int main()
{
    char *file;
    t_data data;
    char *map;

    map = "assets/maps/map1.cub";
    if (!ft_strcmp(&map[ft_strlen(map) - 4], ".cub"))
    {
        file = reader(map);
        data = parser(file);
        if (checker(data))
        {   
            start_mlx(&data);
            mlx_funcs(&data);
            // init_texture(&data);  // HALLEDİLECEK 
            /* 
            start_mlx(&data);
            mlx_hook(data.mlx.window, 2, 1L, event_key, &data);
            mlx_hook(data.mlx.window, 17, 0, close_prog, &data);
            mlx_do_sync(data.mlx.init);
            mlx_loop(data.mlx.init);
            */
        }
        else
            printf("hata");
        free(file);
        data_free(&data);
    }
    return (0);
}
