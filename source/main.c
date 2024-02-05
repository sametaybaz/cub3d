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


/* PRINT_TEST_HERE
void    data_printer(t_data data)
{
    int i;

    i = 0;
    printf("North: %s\n", data.north);
    printf("South: %s\n", data.south);
    printf("East: %s\n", data.east);
    printf("West: %s\n", data.west);
    printf("Ceiling: %d, %d, %d\n", data.ceiling.r, data.ceiling.g, data.ceiling.b);
    printf("Floor: %d, %d, %d\n", data.floor.r, data.floor.g, data.floor.b);
    printf("Start: %d, %d\n", data.map.start.x, data.map.start.y);
    while (i < data.map.road_count)
    {
        printf("Road: %d, %d\n", data.map.roads[i].x, data.map.roads[i].y);
        i++;
    }
    i = 0;
    while (i < data.map.wall_count)
    {
        printf("Wall: %d, %d\n", data.map.walls[i].x, data.map.walls[i].y);
        i++;
    }
    i = 0;
    while (i < data.map.space_count)
    {
        printf("Space: %d, %d\n", data.map.spaces[i].x, data.map.spaces[i].y);
        i++;
    }
    i = 0;
     while (data.map.value[i])
    {
        printf("%s\n", data.map.value[i]);
        i++;
    }
}
*/

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
            // oyunun başlaması
            //  data_printer(data);
            // printf("Oyun Başladı.");
            start_mlx(&data); // initler
            mlx_hook(data.mlx.mlx_new_window, 2, 1L, event_key, &data); // esc
            mlx_hook(data.mlx.mlx_new_window, 17, 0 , close_prog, &data); // çarpı
            mlx_loop(data.mlx.mlx_init);
        }
        else
            printf("hata");
        free(file);
        data_free(&data);
    }
    return (0);
}
