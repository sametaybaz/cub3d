
#include "../../library/cub3d.h"
#include "../../library/libft/libft.h"
#include "../../library/minilibx/mlx.h"

#include <stdio.h>
#include <stdlib.h>

void start_mlx(t_data *data)
{
    data->mlx.mlx_init = mlx_init();
    data->mlx.mlx_new_window = mlx_new_window(data->mlx.mlx_init, 1920, 1080, "test");
}

int event_key(int key_code, t_data *data)
{ 
    if (key_code == 53)
    {
        data_free(data);  
        exit(0);
    }

    return (0);
}

int close_prog(t_data *data)
{   
    data_free(data);   
    exit(0);
}