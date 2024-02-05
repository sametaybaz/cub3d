
#include "../../library/cub3d.h"
#include "../../library/libft/libft.h"
#include "../../library/minilibx/mlx.h"

#include <stdio.h>
#include <stdlib.h>


void data_free(t_data *data)
{
    int i;

    i = 0;
    while (data->value[i])
    {
        free(data->value[i]);
        i++;
    }
    free(data->value);
    i = 0;
    while (data->map.value[i])
    {
        free(data->map.value[i]);
        i++;
    }
    free(data->map.value);
    free(data->north);
    free(data->south);
    free(data->west);
    free(data->east);
    free(data->map.walls);
    free(data->map.spaces);
    free(data->map.roads);

    mlx_destroy_window(data->mlx.init,data->mlx.window);

}