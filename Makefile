NAME	:= cub3d
CC		:= gcc 
INCLUDE	:= ./library
CFLAGS	:= -ggdb -I $(INCLUDE) -I ./library/libft -I ./library/minilibx
LIBFT	= library/libft
MLX		= library/minilibx
FLAGS	= -Wall -Wextra -Werror
LFLAGS	= -framework OpenGL -framework AppKit

SRCDIR	:= source
SRC		:= source/main.c \
			source/reader/reader.c \
			source/utils/error.c \
			source/parser/directions.c \
			source/parser/parser.c \
			source/parser/floor_ceiling.c \
			source/parser/map.c \
			source/utils/matrix.c \
			source/utils/file_exits.c \
			source/checker/checker.c \
			source/checker/directions.c \
			source/checker/floor_ceiling.c \
			source/mlx/mlx.c \
			source/utils/free.c

OBJDIR	:= ./library/objects
OBJ		:= $(SRC:%.c=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp $(LIBFT)/libft.a library/.
	make -C $(MLX)
	cp $(MLX)/libmlx.a library/.
	@$(CC) $(FLAGS) $(CFLAGS) $(LFLAGS) $(OBJ) library/libft.a library/libmlx.a -o $@

$(OBJDIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) $(CFLAGS) -c $< -o $@

clean:
	make clean -C $(LIBFT)
	rm -rf library/libft.a
	make clean -C $(MLX)
	rm -rf library/libmlx.a
	@rm -rf $(OBJDIR)

fclean:
	make fclean -C $(LIBFT)
	rm -rf library/libft.a
	make fclean -C $(MLX)
	rm -rf library/libmlx.a
	@rm -rf $(OBJDIR)
	@rm -f $(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

norm:
	norminette libft

re:	fclean all