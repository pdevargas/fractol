NAME = fractol
SRCS := $(wildcard srcs/*.c)
OBJ = $(SRCS:.c=.o)

MLX_DIR = ./minilibx-mac-osx
MLX = $(MLX_DIR)/libmlx.a
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -fPIC -Iincludes -I$(MLX_DIR) -I$(LIBFT_DIR) -g
LFLAGS = -L$(MLX_DIR) -lmlx -framework OpenGL -framework AppKit -L$(LIBFT_DIR) -lft

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(MLX_DIR) all
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(LFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(MLX_DIR) clean
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
