
#include "../../library/cub3d.h"
#include "../../library/libft/libft.h"
#include "../../library/minilibx/mlx.h"

#include <stdio.h>
#include <stdlib.h>

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

void start_mlx(t_data *data)
{
    data->mlx.init = mlx_init();
    data->mlx.window = mlx_new_window(data->mlx.init, 1920, 1080, "test");
}
