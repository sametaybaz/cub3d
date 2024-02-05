#ifndef CUB3D_H
# define CUB3D_H

# define SPACE ' '
# define ROAD '0' 
# define WALL '1'
# define NORTH "NO"
# define SOUTH "SO"
# define EAST "EA"
# define WEST "WE"
# define FLOOR "F"
# define CEILING "C"
# define CHAR_NORTH 'N'
# define CHAR_SOUTH 'S'
# define CHAR_EAST 'E'
# define CHAR_WEST 'W'

#include <stdlib.h>

typedef struct s_color
{
    int r;
    int g;
    int b;
}   t_color;

typedef struct  s_point
{
    int x;
    int y;
}   t_point;

typedef	struct s_map
{
	t_point	*walls;
	t_point	*roads;
	t_point	*spaces;
	t_point	start;
    int     wall_count;
    int     road_count;
    int     space_count;
	char	**value;
}	t_map;

typedef struct s_mlx 
{
    void *init;
    void *window;
} t_mlx;

typedef struct s_data
{
    char    *north;
    char    *south;
    char    *west;
    char    *east;
    t_color floor;
    t_color ceiling;
    t_map	map;
    t_mlx   mlx;
    char    **value;
}   t_data;

char    *reader(char *path);
int	    error(int line, char *file, char *error, char *str);
t_data	parse_directions(t_data data);
t_data	parser(char	*file);
char	*get_data_value(t_data data, char *field);
t_data	parse_floor_and_ceilling(t_data data);
t_data	parse_map(t_data data);
int	    count_char_in_matrix(char **str, char c);
int	    file_exits(char *path);
int	    check_directions(t_data data);
int     checker(t_data data);
int	    check_floor_and_ceilling(t_data data);

void    start_mlx(t_data *data);
int     event_key(int key_code, t_data *data);
int     close_prog(t_data *data);


void    data_free(t_data *data);

#endif